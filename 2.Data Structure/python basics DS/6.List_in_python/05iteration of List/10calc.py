# Problem: inventory = [("apple", 5), ("banana", 3), ("orange", 7)].
# Calculate the total number of fruits in the inventory.
# Solution:

inventory = [("apple", 5), ("banana", 3), ("orange", 7)]
total_quantity=0
for fruit,quantity in inventory:
    total_quantity+=quantity

print(f"Total fruits: {total_quantity}") # Output: Total fruits: 15


t_q=0

for items in inventory:
    print(items[1])
    t_q+=items[1]

print(f"Total fruits: {total_quantity}") # Output: Total fruits: 15
