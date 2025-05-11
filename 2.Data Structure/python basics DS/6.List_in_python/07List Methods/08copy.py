original = [10, [20, 30], 40]
print(original)
shallow_copy = original.copy()
shallow_copy[1].append(35)
shallow_copy[0] = 100
print(f"Original: {original}")     # Output: [10, [20, 30, 35], 40]
print(f"Shallow Copy: {shallow_copy}") # Output: [100, [20, 30, 35], 40]