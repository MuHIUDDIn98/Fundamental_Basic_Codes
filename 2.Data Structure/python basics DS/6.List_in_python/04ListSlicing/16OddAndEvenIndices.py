# Problem: main_list = [0,1,2,3,4,5,6,7,8,9].
# Create a new list consisting of elements at odd indices [1,3,5,7,9] 
# followed by elements at even indices [0,2,4,6,8].
# Solution:

main_list = [0,1,2,3,4,5,6,7,8,9]
odd_indexed_elements = main_list[1::2]
even_indexed_elements = main_list[0::2]
combined_list = odd_indexed_elements + even_indexed_elements
print(combined_list) # Output: [1, 3, 5, 7, 9, 0, 2, 4, 6, 8]