list1 = [10, 20, 30, 40]
list2 = [100, 200, 300, 400]

# Reverse list2
list2_reversed = list2[::-1]

# Iterate over both lists simultaneously using zip()
for item1, item2 in zip(list1, list2_reversed):
    print(item1, item2)