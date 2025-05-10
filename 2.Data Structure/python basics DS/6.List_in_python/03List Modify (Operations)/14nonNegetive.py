numbers = [1, -2, 3, -4, 5, 0, -6]
kept_numbers = []
print("Original list:", numbers)
print("Processing and identifying negative numbers:")

for num in numbers:
    if num < 0:
        print(f"Found and will exclude: {num}")
    else:
        kept_numbers.append(num)

print("Final list of non-negative numbers:", kept_numbers)
# Output:
# Original list: [1, -2, 3, -4, 5, 0, -6]
# Processing and identifying negative numbers:
# Found and will exclude: -2
# Found and will exclude: -4
# Found and will exclude: -6
# Final list of non-negative numbers: [1, 3, 5, 0]