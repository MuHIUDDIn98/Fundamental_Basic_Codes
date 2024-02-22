
# lambda <arguments> : <expression>

sum = lambda a, b, c : a + b + c
print(sum(2, 3, 4))

square = lambda x : x *x

print(square(5))


def double_it(x):
    return x*2


double_it2 = lambda x :  x*2

numbers = [11,22,88,33,44,55,66]

doubled_numbers = map(double_it,numbers)

#doubled_numbers = map(double_it2,numbers)
print(numbers)

print(list(doubled_numbers))


#filtering 
bigger_than60 = filter(lambda num: num>60, numbers)
print(numbers)
print(list(bigger_than60))