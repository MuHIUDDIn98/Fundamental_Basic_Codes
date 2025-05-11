# Problem: data = [1, 2, 'x', 3, 'y', 4, 'z', 5.5]. 
# Try to sum the numbers in the list. If a non-numeric type is encountered,
# print an error message for that item and continue summing the rest.
#  Solution:
data = [1, 2, 'x', 3, 'y', 4, 'z', 5.5]
total = 0
for item in data:
    if isinstance(item, (int, float)):
        total += item
    else:
        print(f"Skipping non-numeric item: {item}")
print(f"Total of numeric items: {total}")