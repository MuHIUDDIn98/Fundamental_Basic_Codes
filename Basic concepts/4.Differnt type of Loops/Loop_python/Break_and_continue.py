#break to the specific iteration

numbers = [1,2,3,4,5,-6,7,8,9,10]

for item in numbers:
    print(item)
    if(item<0):
        break
else:
    print("break")


# skip printing number 6  
print("New numbers2")
print("It will skip the Number 6 ")
numbers2 = [1,2,3,4,5,6,7,8,9,10]
for item in numbers2:
    if(item == 6):
        continue
    print(item)


#skip all negetive numbers
print("Number3")
numbers3 = [1,-2,3,-4,5,-6,7,8,9,-10]

for item in numbers3:
    if(item<0):
        continue
    print(item)
else:
    print("break")