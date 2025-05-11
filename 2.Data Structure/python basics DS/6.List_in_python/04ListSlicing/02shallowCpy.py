# Problem: letters = ['a', 'b', 'c', 'd', 'e', 'f']. 
# Create a complete shallow copy of this list using slicing. Solution

letters = ['a', 'b', 'c', 'd', 'e', 'f']
letters_copy = letters[:]
print(letters_copy) # Output: ['a', 'b', 'c', 'd', 'e', 'f']
print(f"Original id: {id(letters)}, Copy id: {id(letters_copy)}") # IDs will be different