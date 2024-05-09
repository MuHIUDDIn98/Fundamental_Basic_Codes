numbers = [1,2,3,4,5,6,7,8,9,10]
for i,num in enumerate(numbers):
    print(f'list[{i}] ->{numbers[i]}')

print(f'last element :{numbers[-1]}')
print(f'2nd last element :{numbers[-2]}')
print(f'printing list [3,4,5] index 2 to 4 :{numbers[2:5]}') 
print(f'priting list [2,3,4,5] intex 1 to 4 :{numbers[1:5]}') #priting list [2,3,4,5] intex 1 to 4
print(f'3rd position or index 2 to last :{numbers[2:]}')  #
print(f'from begeinilast of list element :{numbers[:-1]}') #
print(f'Numbers :{numbers[:]}')
print(f'Step 1 :{numbers[1:7:1]}') #step 1
print(f'Step 2 :{numbers[1:7:2]}') #step 2
print(f'list reverse :{numbers[::-1]}') #reverse
print(f'{numbers[8:2:-1]}')
