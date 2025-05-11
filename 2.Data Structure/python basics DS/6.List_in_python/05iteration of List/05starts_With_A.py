# Problem: names = ["Alice", "Bob", "Charlie", "David"].
# Use a for loop to print all names that start with the letter "A". 
# Solution:
names = ["Alice", "Bob", "Charlie", "David","Anik"]
for name in names:
    if name[0]=='A':
        print(name) # Output: Alice

    if name.startswith("A"):
        print(name) # Output: Alice