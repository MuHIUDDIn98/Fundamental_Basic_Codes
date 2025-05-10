list=[3,4,5,23,4,5,67,7,8,8,40]
result=[]
for i in list:
    if i%2==0:
        result.append(i)


com_result = [i for i in list if i%2==0]
sqr_new =[i**2  for i in list if i%2==0]
sqr_new2 =[i**2  if i%2==0 else i for i in list]
print(result)
print(com_result)
print(sqr_new)
print(sqr_new2)
