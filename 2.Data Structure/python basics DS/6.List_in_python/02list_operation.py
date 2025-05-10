my_color = ['Blue','green','Gray','Red','Yellow']
print(my_color)
my_color[4]='pink'#replacing by pink
print(my_color)


# adding items to a list append
numbers = [1,2,3,11,4,5,6]
print(numbers)
numbers.append(7)
print(numbers)

#extend list and adding
numbers.extend([8,11,4,5,3,9,10,11])
print(numbers)
print(numbers+[12,11,13]) #adding and printing

#repeat all Items in list  using *
print(numbers*3)

#insert Item at a desired location or index
numbers.insert(2, 2.5)
print(numbers)

#min max finder
print(f'max in numbers:{max(numbers)}')
print(f'min in numbers:{min(numbers)}')


#count elements :
print(f'count 11 :{numbers.count(11)}')

#sorting list
numbers.sort()
print(f'sorted list :{numbers}')



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
numbers.append("delete me")
print(numbers)
numbers.remove(11)
numbers.remove("delete me")
print(f'after delete number 11 and "delete me" {numbers}')

#poping number from index 2
numbers.pop(2)
print(f'pop index 2 "7" : {numbers}')

#Copy list
list = [1,2,3,4]
list2 = list
print(list)
list3 = list2.copy()
print(list3)

fruits = ['apple','banana','orange','grapes', 'Strawberry']
print(fruits)
fruit_len =len(fruits)
print(f'length of fruits :{fruit_len}')
print("iterate through fruit lists :")
for item in fruits:
    print(item)

#list reverse
fruits.reverse()
print(f'reverse :{fruits}')


#check item in list
apple = 'apple' in fruits
pink = 'pink' in fruits
print(f'checking apple in fruits :{apple}')
print(f'checking pink in fruits :{pink}')


#nested lists
my_list = [1,2,3,[1.0,2.0,3.0]]
print(my_list)
print(my_list[3])
print(my_list[3][2])

#to know more check goto python list operaitons



