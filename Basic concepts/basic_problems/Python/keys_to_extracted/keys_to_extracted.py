sample_dict = {
    "name": "Kelly",
    "age": 25,
    "salary": 8000,
    "city": "New York"
}

# Keys to extract
keys_to_extract = ["name", "salary"]
keys_to_extract1 = ["name", "age"]

# Use dictionary comprehension to create a new dictionary with extracted keys
extracted_dict = {key: sample_dict[key] for key in keys_to_extract if key in sample_dict}
extracted_dict1 = {key: sample_dict[key] for key in keys_to_extract1 if key in sample_dict}

print(extracted_dict)
print(extracted_dict1)