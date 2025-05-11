# Problem: names = ["Eric", "Graham", "John", "TerryG", "TerryJ", "Michael"].
# Find the first name in the list that has more than 5 characters and print it.
# If no such name exists, print "None found".
# Solution:

names = ["Eric", "Graham", "John", "TerryG", "TerryJ", "Michael"]

found_name = "None found"
for name in names:
    if len(name) > 5:
        found_name = name
        break   
print(found_name) # Output: Graham