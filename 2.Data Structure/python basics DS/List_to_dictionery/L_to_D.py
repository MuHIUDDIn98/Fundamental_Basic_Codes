list = [1,2,2,3,3,3,4,5]
dict = {item:list.count(item) for item in list}
print(dict)