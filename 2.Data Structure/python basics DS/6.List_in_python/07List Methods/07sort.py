elements = ['x', 'y', 'z', 'a', 'b']
elements.sort()
print(elements) # Output: ['a', 'b', 'x', 'y', 'z']


print("---"*30)

unsorted_numbers = [5, 1, 8, 3, 2]
unsorted_numbers.sort(reverse=True)
print(unsorted_numbers) # Output: [8, 5, 3, 2, 1]


print("---"*30)
words = ["apple", "Banana", "cherry", "Date"]
words.sort(key=str.lower)
print(words) # Output: ['apple', 'Banana', 'cherry', 'Date']

print("**"*30)

students = [("Charlie", 22), ("Alice", 22), ("Bob", 20), ("David", 20)]
students.sort(key=lambda student: (student[1], student[0]))
print(students) # Output: [('Bob', 20), ('David', 20), ('Alice', 22), ('Charlie', 22)]