# Problem: data_stream = [1,2,3,4,5,6,7,8,9,10]. Insert the sublist ['a','b'] 
# after the element 3 (i.e., at index 3) without removing any elements,
# using slice assignment.
# Solution:
data_stream = [1,2,3,4,5,6,7,8,9,10]
data_stream[3:3] = ['a', 'b']
print(data_stream) # Output: [1, 2, 3, 'a', 'b', 4, 5, 6, 7, 8, 9, 10]