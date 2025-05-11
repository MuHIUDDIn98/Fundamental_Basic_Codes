# Problem: original_list = [1, 2, 2, 3, 4, 2, 5]. 
# Remove all occurrences of the number 2 from this list while iterating forwards.
#  Be careful about index changes. 
#  Solution:

original_list = [1, 2, 2, 3, 4, 2, 5]
i = 0
while i < len(original_list):
    if original_list[i] == 2:
        original_list.pop(i)
    else:
        i += 1
print(original_list) # Output: [1, 3, 4, 5]