# Problem: inventory = [("apple", 10), ("banana", 5), ("orange", 10)]. 
# If an item "apple" exists, update its quantity to 15.
# If it doesn't exist, add ("apple", 15). (Modify in-place). Solution:

inventory = [("apple", 10), ("banana", 5), ("orange", 10)]
item_to_update = "apple"
new_quantity = 15
found = False
for i in range(len(inventory)):
    if inventory[i][0] == item_to_update:
        inventory[i] = (item_to_update, new_quantity)
        found = True
        break
if not found:
    inventory.append((item_to_update, new_quantity))
print(inventory) # Output: [('apple', 15), ('banana', 5), ('orange', 10)]