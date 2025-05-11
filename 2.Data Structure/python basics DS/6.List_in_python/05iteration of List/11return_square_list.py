# Problem: my_list = [1, 2, 3, 4, 5].
# Modify this list in-place by squaring each element using a for loop and range(len(my_list)). 
# Solution:

my_list = [1, 2, 3, 4, 5]
print(my_list)
for i in range(len(my_list)):
    my_list[i]=my_list[i]**2

print(my_list)
