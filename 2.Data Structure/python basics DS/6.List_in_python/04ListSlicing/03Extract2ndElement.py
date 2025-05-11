# Problem: Using letters , extract every second element of the entire list. Solution:
letters = ['a', 'b', 'c', 'd', 'e', 'f','g','h','i','j']

every_second_letter = letters[::2]
print(every_second_letter) # Output: ['a', 'c', 'e']
every_second_letter = letters[::1]
print(every_second_letter)
every_second_letter = letters[::3]
print(every_second_letter)