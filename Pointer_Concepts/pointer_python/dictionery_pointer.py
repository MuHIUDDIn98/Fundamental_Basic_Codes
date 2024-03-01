dict1= {'value': 11}

dict2 = dict1

print("Before  value is updated: ")
print("d1 =", dict1)
print("d2 =", dict2)


print("\n d1 points to this address :",id(dict1))
print("d2 points to this address  :", id(dict2))


#value updating
dict2['value'] = 22

print("\n after  value is updated: ")
print("d1 =", dict1)
print("d2 =", dict2)


print("\n num1 points to this address :",id(dict1))
print("num2 points to this address  :", id(dict2))

#before and after dict1 and dict2 they pointing to the same dictionery