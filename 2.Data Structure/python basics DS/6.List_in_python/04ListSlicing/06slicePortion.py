# Problem: data = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9].
# Extract elements from index 2 to index 7, but only every other element. Solution:

data = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
custom_slice = data[2:8:2] # Start at 2, end before 8, step by 2
print(custom_slice) # Output: [2, 4, 6]
