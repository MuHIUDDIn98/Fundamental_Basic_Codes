def add(num1,num2,*numbers):
    print(num1,num2)
    print(numbers)
    

def full_name(f_name,l_name):
    name = f'{f_name} {l_name}'
    return name

name = full_name(l_name = "Ahmed",f_name = "Muhiuddin")
print(name)

#==============key args =================
def long_name(**kargs):
    print(kargs)
    print(f'first_name :{kargs["first_name"]}')
    print(f'Last_name :{kargs["Last_name"]}')
    for key,Value in kargs.items():
        print(f'{key} : {Value}')
    
    
long_name(first_name = "Muhiuddin", Last_name = "Ahmed")

