import torch
from transformers import LlamaForCausalLM, LlamaTokenizer, Trainer, TrainingArguments
from datasets import load_dataset

# Path where the model and tokenizer are stored
model_path = r"C:\Users\satya\.ollama\models\manifests\registry.ollama.ai\library\llama3.1"  # Update this path

# Load the tokenizer and model
tokenizer = LlamaTokenizer.from_pretrained(model_path)
model = LlamaForCausalLM.from_pretrained(model_path)

# Load your dataset
# Assuming you have a text file with one example per line
dataset = load_dataset('text', data_files={'train': 'train_data.txt'})

# Tokenize the dataset
def tokenize_function(examples):
    return tokenizer(examples['text'], truncation=True)

tokenized_datasets = dataset.map(tokenize_function, batched=True)

# Set format for PyTorch
tokenized_datasets.set_format(type='torch', columns=['input_ids', 'attention_mask'])

# Define training arguments
training_args = TrainingArguments(
    output_dir='./results',          # Output directory
    evaluation_strategy="epoch",     # Evaluation strategy to adopt during training
    learning_rate=2e-5,              # Learning rate for optimization
    per_device_train_batch_size=2,   # Batch size for training
    num_train_epochs=3,              # Total number of training epochs
    weight_decay=0.01,               # Strength of weight decay
)

# Create Trainer instance
trainer = Trainer(
    model=model,
    args=training_args,
    train_dataset=tokenized_datasets['train'],
)

# Train the model
trainer.train()

# Save the trained model
model.save_pretrained('./trained_llama3.5')
tokenizer.save_pretrained('./trained_llama3.5')