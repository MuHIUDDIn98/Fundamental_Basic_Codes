# Problem: elements = [1, 2, 3, 4, 5]. Clear all elements from this list using clear(), 
# then append [6, 7] as a single nested list element. Solution:

elements = [1, 2, 3, 4, 5]
elements.clear()
print(f"After clear: {elements}") # Output: After clear: []
elements.append([6, 7])
print(f"After appending nested list: {elements}") # Output: After appending nested list: [[6, 7]]