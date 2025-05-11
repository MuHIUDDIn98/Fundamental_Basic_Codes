# Problem: mixed_values = [1, "skip", 2, "skip", 3].
# Iterate through the list. If an element is "skip",
# use continue to go to the next iteration. 
# Otherwise, print the element. 
# Solution:

mixed_values = [1, "skip", 2, "skip", 3]
for value in mixed_values:
    if value == "skip":
        continue
    print(value)