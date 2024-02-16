#list is used to store list of Items

list1 = [] #empty list
numbers = [1,2,3,4,5] #list of integers
colors = ['red','blue','green']
mixed_list = [1,2,3,8,'red'] #mixed list
my_list = ['Python','java',[1,2,3,4,5],'anik'] #list can have another list


#accessing elements from list
print(numbers)
print(numbers[4])
# pirnt(numbers[5]) generate error index out of range
print(numbers[-1]) #last elements of list
print(numbers[-2]) # second last elements of list

print("==========")

i = 4   #printing list items from reverse..
for item in numbers:
    print(numbers[i])
    i= i-1
    