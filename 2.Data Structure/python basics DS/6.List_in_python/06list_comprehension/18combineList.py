list1 = ['A', 'B']
list2 = [1, 2, 3]
cartesian_product = [(item1, item2) for item1 in list1 for item2 in list2]
print(cartesian_product)
# Output: [('A', 1), ('A', 2), ('A', 3), ('B', 1), ('B', 2), ('B', 3)]