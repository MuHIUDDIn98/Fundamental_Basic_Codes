# Problem:
# Use a while loop to iterate backwards through items = ['a', 'b', 'c', 'd'] and
#  print each item using an index. 
# Solution:

items = ['a', 'b', 'c', 'd']
index = len(items) - 1
while index >= 0:
    print(items[index])
    index -= 1