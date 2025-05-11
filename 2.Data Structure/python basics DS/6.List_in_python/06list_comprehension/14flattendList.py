# Problem 
# (Flattening a List of Lists):
# nested = [[1, 2], [3, 4, 5], [6]].
# Create a flattened list [1, 2, 3, 4, 5, 6] using a nested list comprehension.
# Solution:

nested = [[1, 2], [3, 4, 5], [6]]
flattened = [item for sublist in nested for item in sublist]
print(flattened) # Output: [1, 2, 3, 4, 5, 6]