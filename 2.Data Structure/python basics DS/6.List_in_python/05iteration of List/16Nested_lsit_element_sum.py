# Problem: nested_list = [[1, 2], [3, 4, 5], [6]]. 
# Use nested for loops to calculate the sum of all individual numbers in the nested list.
#  Solution:

nested_list = [[1, 2], [3, 4, 5], [6]]
total_sum = 0
for sublist in nested_list:
    for number in sublist:
        total_sum += number
print(f"Sum of all numbers: {total_sum}") # Output: Sum of all numbers: 21