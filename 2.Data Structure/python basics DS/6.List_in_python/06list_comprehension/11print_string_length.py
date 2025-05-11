mixed_list = [1, "two", 3.0, "four", 5]
string_lengths = [len(item) for item in mixed_list if isinstance(item, str)]
print(string_lengths) # Output: [3, 4]