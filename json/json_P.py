import json as j

data = {
    'name': "Anik",
    'age' : 30,
    'is_logged_in': True,
}

#serialization
json_string = j.dumps(data,indent=6)

print(type(json_string))
print(json_string)

#