# Problem: my_string_list = ["P", "y", "t", "h", "o", "n"].
# Extract the characters 'h', 'o', 'n' using a single slice.
# Solution:

my_string_list = ["P", "y", "t", "h", "o", "n"]
hon_slice = my_string_list[3:] # or my_string_list[3:6] or my_string_list[-3:]
print(hon_slice) # Output: ['h', 'o', 'n']