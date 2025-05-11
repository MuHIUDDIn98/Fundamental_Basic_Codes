# Problem: values = [10, 20, 30, 40, 50]. 
# Use a while loop and pop() to print and remove elements
#  from the end of the list until it's empty.
#  Solution:

values = [10, 20, 30, 40, 50]
print("Processing with while and pop:")
while values:
    item = values.pop()
    print(f"Popped: {item}, Remaining: {values}")