numbers = [1, -2, 3, -4, 5, 0, -6]
non_negative_list = [] # Initialize an empty list

for num in numbers:
    if num >= 0: # Check if the number is not negative
        non_negative_list.append(num) # Add it to our new list

print(non_negative_list)
# Output will be: [1, 3, 5, 0]

# To replace the original list:
# numbers = non_negative_list
# print(numbers)