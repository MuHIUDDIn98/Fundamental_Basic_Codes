# Problem: Given long_list = list(range(20)).
# Extract elements from the end of the list,
# stepping backwards by 3, until you have 4 elements.
# Solution:
long_list = list(range(20)) # [0, 1, ..., 19]
slice_result = long_list[-1:-13:-3] # This will give 4 items: index -1, -4, -7, -10
print(slice_result) # Output: [19, 16, 13, 10]