##############################reversse a sentence not words

# def satya(res):
#     w = res.split()
    
#     rw = w[::-1]
    
#     rs = ' '.join(rw)
#     return rs

# t = input("enter a string  => " )
# print(satya(t))


######################### #reverse a wrods 

# def satya(res):
#     r = res.split()

#     rw = [res[::-1]for res in r ] 
#     fin = ' '.join(rw)
#     return fin

# t = input("enter a string  => " )
# print(satya(t))



#############################count Ecah character in a string

# def count_characters(s):
#     # Create an empty dictionary to store the counts
#     char_count = {}
    
#     # Iterate over each character in the string
#     for char in s:
#         # If the character is already in the dictionary, increment its count
#         if char in char_count:
#             char_count[char] += 1
#         # Otherwise, add the character to the dictionary with a count of 1
#         else:
#             char_count[char] = 1
    
#     return char_count

# # Example usage
# s = input("Enter a string: ")
# print( count_characters(s))
# # print(result)


#count number in array 

def satya(arr):
    num_count = {}
    for num in arr:
        if num in num_count:
            num_count[num]+=1

        else:
            num_count[num]=1    

    return num_count


arr = [2,4,5,6,7,8,9,10]

print(satya(arr))