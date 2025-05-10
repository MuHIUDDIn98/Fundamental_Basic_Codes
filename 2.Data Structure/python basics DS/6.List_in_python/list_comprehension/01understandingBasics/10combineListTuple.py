keys=['name','city']
values = ['John',"New York"]

key_value_pairs =[]
if len(keys)== len(values):
    for i in range(len(keys)):
        key_value_pairs.append((keys[i],values[i]))

print(key_value_pairs)
