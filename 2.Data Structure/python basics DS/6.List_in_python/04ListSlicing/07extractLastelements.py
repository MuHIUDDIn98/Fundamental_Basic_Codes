# extract the last 3 elements using negative indexing in a slice. Solution:

data = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
last_three = data[-3:]
print(last_three) # Output: [7, 8, 9]
last_three = data[-4:]
print(last_three) # Output: [6,7, 8, 9]
last_three = data[-10:]
print(last_three) #