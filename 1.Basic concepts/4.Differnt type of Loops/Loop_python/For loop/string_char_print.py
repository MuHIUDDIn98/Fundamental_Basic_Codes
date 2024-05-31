str = 'abcedef'

for i in range(len(str)):
    print(i, end = " ")
    
print()
for i in range(len(str)):
    print(str[i], end = " ")

for i ,val in enumerate(str):
    print(f'index :{i} = {val}')