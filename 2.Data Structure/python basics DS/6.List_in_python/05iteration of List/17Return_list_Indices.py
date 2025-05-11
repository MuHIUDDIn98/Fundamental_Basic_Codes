# Problem: Write a function find_all_indices(data_list, value)
# that returns a list of all indices where value appears in data_list.
# Use enumerate. 
# Solution:

def find_all_indices(data_list, value):
    indices = []
    for index, item in enumerate(data_list):
        if item == value:
            indices.append(index)
    return indices

my_data = [1, 5, 2, 5, 3, 5, 4]
print(find_all_indices(my_data, 5)) # Output: [1, 3, 5]