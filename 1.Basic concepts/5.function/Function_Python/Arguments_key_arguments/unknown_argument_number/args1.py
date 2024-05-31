def arg_test(name,*args):
    print(name)
    print(*args)
    print(f'args print {args[0]}')
    print(f'args print {args[1]}')
    sum = 0
    for i in args:
        sum = i+sum
        
    return sum
        
   


sum = arg_test("anik",32,22,44)
print(f'sum of all arges {sum}')
arg_test("ashik",45,33)