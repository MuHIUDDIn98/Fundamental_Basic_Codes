str = "anik"
str2= 'aAnIk'
str3 = """this is also a string"""
str4 = str.title()

print(str)
print(f"str data type : {type(str)}")
print(f"Capitalize : {str.capitalize()}")
print(f"Upper case : {str.upper()}")
l=str.upper()
print(f"lower case : {str.lower()}")
print(f"swapecase {str2} to {str2.swapcase()}")
print("title of str : "+str4)
rplc = str3.replace("string","tingTing")
print(f"replase str3 content string :  {rplc}")
print(f"count letter : {rplc.count('g')}")
