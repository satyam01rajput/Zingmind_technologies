import streamlit as st
import os
from langchain_groq import ChatGroq
from langchain_openai import OpenAIEmbeddings
from langchain.text_splitter import RecursiveCharacterTextSplitter
from langchain.chains.combine_documents import create_stuff_documents_chain
from langchain_core.prompts import ChatPromptTemplate
from langchain.chains import create_retrieval_chain
from langchain_community.vectorstores import FAISS
from langchain_community.document_loaders import PyPDFDirectoryLoader

from dotenv import load_dotenv
import time

# Load environment variables
load_dotenv()

# Get the API key from the environment, handle missing keys
groq_api_key = os.getenv('GROQ_API_KEY')
if groq_api_key is None:
    st.error("GROQ API Key not found. Please set the GROQ_API_KEY in the .env file.")

# Streamlit App Title
st.title("Local _LLm")

# Initialize the language model with the provided GROQ API key
llm = ChatGroq(groq_api_key=groq_api_key, model_name="Llama3-8b-8192")

# Define the prompt template for the questions
prompt = ChatPromptTemplate.from_template(
"""
Answer the questions based on the provided context only.
Please provide the most accurate response based on the question.
<context>
{context}
<context>
Questions: {input}
"""
)

# Define a function to handle vector embedding
def vector_embedding():
    if "vectors" not in st.session_state:
        try:
            # Initialize OpenAI embeddings
            st.session_state.embeddings = OpenAIEmbeddings()

            # Load the documents from the specified directory
            st.session_state.loader = PyPDFDirectoryLoader("./us_census")  # Data Ingestion
            st.session_state.docs = st.session_state.loader.load()  # Document Loading
            
            # Split the documents into chunks
            st.session_state.text_splitter = RecursiveCharacterTextSplitter(chunk_size=1000, chunk_overlap=200)  # Chunk Creation
            st.session_state.final_documents = st.session_state.text_splitter.split_documents(st.session_state.docs[:20])  # Splitting

            # Create vectors using FAISS and OpenAI embeddings
            st.session_state.vectors = FAISS.from_documents(st.session_state.final_documents, st.session_state.embeddings)

            st.success("Vector Store DB Is Ready")

        except Exception as e:
            st.error(f"Error during vector embedding: {str(e)}")
            return

# Get user input for the question
prompt1 = st.text_input("Enter Your Question From Documents")

# Button to start document embedding
if st.button("Load all the Docs"):
    vector_embedding()

# Handle the query and document retrieval
if prompt1:
    try:
        # Create document chain and retriever
        document_chain = create_stuff_documents_chain(llm, prompt)
        retriever = st.session_state.vectors.as_retriever()
        retrieval_chain = create_retrieval_chain(retriever, document_chain)

        # Measure response time
        start = time.time()
        response = retrieval_chain.invoke({'input': prompt1})
        response_time = time.time() - start

        st.write(f"Response time: {response_time:.2f} seconds")
        st.write(response['answer'])

        # Display the document similarity search results
        with st.expander("Document Similarity Search"):
            for i, doc in enumerate(response["context"]):
                st.write(doc.page_content)
                st.write("--------------------------------")

    except KeyError as e:
        st.error(f"Key error in the response structure: {str(e)}")

    except Exception as e:
        st.error(f"An error occurred during document retrieval: {str(e)}")
