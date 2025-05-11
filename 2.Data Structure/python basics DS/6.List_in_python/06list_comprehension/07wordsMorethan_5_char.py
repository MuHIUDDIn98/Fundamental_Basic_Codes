words = ["short", "longer", "longest", "tiny"]
long_words = [word for word in words if len(word) > 5]
print(long_words) # Output: ['longer', 'longest']