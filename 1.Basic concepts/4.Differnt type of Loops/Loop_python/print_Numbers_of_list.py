numbers= [-1,-6,-3,3,1,4,6,78,76,33]
negative_numbes =[]
positive_numbers = []

for ne in numbers:
    if(ne<0):
        negative_numbes.append(ne)
else:
    print("negetive number append completed")
    
for pos in numbers:
    if(pos>0):
        positive_numbers.append(pos)
else:
    print("positive number append completed ")

print(negative_numbes)
print(positive_numbers)
        