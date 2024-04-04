num =[]

num = [i for i in range(3,12)]
print(num)

num = [i**2 for i in range(3,12)]
print(num)

num = [[i,i**2] for i in range(3,12)]
print(num)


numbers = [12,13,14,45,656,7,8,89]


odd_num = [num for num in numbers if num %2 == 1]
print(odd_num)

even_number = [num for num in numbers if num%2 ==0]
print(even_number)

names = ['Anik', 'sabbir','salman']
ages = [37,38,39]

pairs = [(name,age) for name in names for age in ages]
print(pairs)


print("combination of 7*7")

combination = [[i,j] for i in range(3) for j in range(3)]
print(combination)
# for i in range(7):
#     for j in range(7):
#         combination.append([i,j])

# print(combination)

