# Problem: Using data from Q8, 
# extract all elements except the first two and the last two. Solution:

data = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
middle_elements = data[2:-2]
print(middle_elements) # Output: [2, 3, 4, 5, 6, 7]

# Problem: alphabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'].
# Get elements from the third from last up to (but not including) the last element. Solution:
alphabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h']
slice_neg_indices = alphabet[-3:-1]
print(slice_neg_indices) # Output: ['f', 'g']