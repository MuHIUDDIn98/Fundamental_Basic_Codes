person = {'name': 'Carol', 'age': 35}

# Using format_map() - preferred for dictionaries
print("Name: {name}, Age: {age}".format_map(person))
# Output: Name: Carol, Age: 35

# Using ** to unpack the dictionary as keyword arguments
print("Name: {name}, Age: {age}".format(**person))
# Output: Name: Carol, Age: 35