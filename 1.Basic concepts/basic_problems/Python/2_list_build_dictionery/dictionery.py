keys = ['Ten', 'Twenty', 'Thirty']
values = [10, 20, 30]

# Use zip() to pair elements from keys and values lists, then convert to dictionary
result_dict = dict(zip(keys, values))

print(result_dict)