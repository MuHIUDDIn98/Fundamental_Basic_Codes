# Problem: You have list_one = [10, 20] and list_two = [30, 40]. 
# Add all items from list_two to list_one using extend(). Solution:

list_one = [10, 20]
list_two = [30, 40]
list_one.extend(list_two)
print(list_one) # Output: [10, 20, 30, 40]