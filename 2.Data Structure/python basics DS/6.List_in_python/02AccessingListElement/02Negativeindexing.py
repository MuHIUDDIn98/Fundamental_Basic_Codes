scores = [80, 85, 90, 95, 100]
print(scores[-1]) # Output: 100
print(scores[-2]) # Output: 95


letters = ['P', 'Y', 'T', 'H', 'O', 'N']
print(letters[3]) # Output: H



elements = [10, "hello", 3.14]
print(elements[1]) # Output: hello


my_list = ["first", "second", "third"]
# print(my_list[3])
# Error: IndexError: list index out of range
# Why: Because the list has 3 elements, so valid indices are 0, 1, and 2. Index 3 is out of bounds.
print("Accessing my_list[3] would cause an IndexError because the highest index is 2.")