# Problem: Given original = [1,2,3,4,5,6].
# Create a new list that contains the first half of original followed by the second half of original reversed.
# E.g. [1,2,3,6,5,4].
# Solution:

original = [1,2,3,4,5,6]

mid = len(original)//2

firstHalf = original[:mid]
secondHalfReversed = original[mid:][::-1]
original=firstHalf+secondHalfReversed
print(original)
