dict_1 = {'rahim':10,'karim': 20, 'fahim': 4}
dict_2 = {'rahim':2 ,'karim':5,'fahim':4,'kabir':45}

print(dict_2.keys())
print(dict_2.values())
print(dict_2.items())

result = dict_1
for key,value in dict_2.items():
    result[key] = result.get(key,0) + value
    
print(result)
    
