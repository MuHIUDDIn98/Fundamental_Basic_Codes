my_color = ['Blue','green','Gray','Red','Yellow']
print(my_color)
my_color[4]='pink'#replacing by pink
print(my_color)


# adding items to a list
numbers = [1,2,3,4,5,6]
print(numbers)
numbers.append(7)
print(numbers)

#extend list
numbers.extend([8,9,10,11])
print(numbers)
print(numbers+[12,13]) #adding and printing

#repeat Items in list  using *
print(numbers*3)

#insert Item at a desired location
numbers.insert(2, 2.5)
print(numbers)

#delete operation on list
del numbers[2] #delete from specific index
print(numbers)

del numbers[2:5] # delete from 2 to 4 index
print(numbers)

#if we want to delete the entire list write del <list name>
#del numbers

#clearing all elements from number list

# numbers.clear()
# print(numbers)

#removing numbers
numbers.remove(1) #remove item 1
print(numbers)
#remove a specific number from the list
numbers.remove(11)
print(numbers)

#poping number from index 2
numbers.pop(2)
print(numbers)

#Copy list
list = [1,2,3,4]
list2 = list
print(list)
list3 = list2.copy()
print(list3)

fruits = ['apple','banana','orange','grapes', 'Strawberry']
for item in fruits:
    print(item)

#check item in list
print('apple' in fruits)
print('pink' in fruits)


#nested lists
my_list = [1,2,3,[1.0,2.0,3.0]]
print(my_list)
print(my_list[3])
print(my_list[3][2])





