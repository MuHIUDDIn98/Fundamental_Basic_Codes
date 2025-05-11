items = ["apple", "banana", "cherry", "banana"]
items.remove("banana")
print(items) # Output: ['apple', 'cherry', 'banana']

print("=="*30)
my_items = ["book", "pen"]
try:
    my_items.remove("pencil")
except ValueError:
    print("'pencil' not found, cannot remove.")
print(my_items)