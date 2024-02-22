def add(num1,num2,*numbers):
    print(num1,num2)
    print(numbers)
    
add(3,4,5,6,7)




def full_name(f_name,l_name):
    name = f'{f_name} {l_name}'
    return name

name = full_name(l_name = "Ahmed",f_name = "Muhiuddin")
print(name)

#==============key args =================
def long_name(**kargs):
    print(kargs)
    for key,Value in kargs.items():
        print(f'{key} {Value}')
    
    
long_name(first = 'MD' ,last = 'Muhiuddin',sur_name = 'Ahmed')


