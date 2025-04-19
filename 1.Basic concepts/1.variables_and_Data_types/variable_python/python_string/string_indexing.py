a = "this is a string"
#how to get string size
stringSize = len(a)
print(type(stringSize))
print(f"size of a = {stringSize}")
print("======================")
print(f"first character a[0]= {a[0]}") #first character
print(f"first character negative indexing  a[-16] = {a[-16]}") #first character

print(a[1]) #second character   
print(a[2]) #third character
print(a[3]) #fourth character
print(a[14]) #fifth character
print(a[15]) #sixth character
# print(a[16]) #seventh character
print(f"last character of a string {len(a)-1} = {a[len(a)-1]}")
print(f"last caracter of a string negative indexing only support in python a[-1] = {a[-1]}") 
print("======================")
#using for loop print all characters in string
for i in range(stringSize):
    print(a[i])