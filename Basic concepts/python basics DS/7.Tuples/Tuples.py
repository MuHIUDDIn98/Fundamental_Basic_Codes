#tuple is similar to a list

#unlike lists, elements once assigned to a tuple  cannot be changed(imutable)
#elements are placed inside parenthesis


my_tuple1=()
my_tuple2 =()
my_tuple3 = (1,2, "red", "green", 3.4) #mixed
my_tuple4 = (1,2,('apple','banana'), 3,4) #nested
my_tuple5 = (1,2,['Python', 'java'])
print(my_tuple3)

#one item in tuple
t1 = ('Python')
print(type(t1))
t2 = ("java",)
print(type(t2))

#accessing tuple elements
t1  = ('a', 'b', 'c', 'd')
print(t1[0])
print(t1[1])
print(t1[-1])
print(t1[-2])

#slicing to access range of elements
#slicing operator :
my_tuple = ('H', 'e', 'l', 'l','o')
print(my_tuple[1:4])
print(my_tuple[:-3])
print(my_tuple[2:])
print(my_tuple[:])


#changing elements of a Tuple
#tuples are immutable - elements cannot be changed 
#However if tuple contains mutable elements like lists it can be change
my_tuple34 = (1,2,3,['h','e','l','l','o'])
print(my_tuple34)
my_tuple34[3][3] = 'L'
print(my_tuple34)

#cocatenate tuple
print(my_tuple34 + (22,33,44,55))
print(my_tuple34)

#repeat tuple items using *
print(my_tuple34*3)


#loops
for item in my_tuple34:
    print(item)

#we cannot delete items in tuples
# we cannot delete the tuple itself

#we can change inside the list elements
nested_Tuple_list = ([1,2,3,4],[5,6,7,8],[9,10,11,12])
print(nested_Tuple_list)
nested_Tuple_list[1][3] = 3333
print(nested_Tuple_list)