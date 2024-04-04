def add(num1,num2):
    total = num1+num2
    return total


def mul(num1,num2=1): #default value num2 = 1,  we use default parameter always right side Default parameter
    return  num1 * num2

def multiply_all(*numbers):
    print(f'all elements in tuples {numbers}')
    results = 1
    for num in numbers:
        #print(f'num :{num}')
        results*=num
        #print(f'results: {results}')
    return results

def sum(*args):
    sum = 0
    for num in args:
        sum = sum + num
    return sum

sumation = sum(5, 4) #output 5 + 4 = 9// Some code
print(f'Multiple parameter passing without declear 5 + 4 : {sumation}')



result = add(12,35)

print(result)

result1 = add(num2=35,num1=35)
print(f'35+35 : {result1}')
  
mul_result = mul(45)
print(f'passing one args :{mul_result}')

mul_result = mul(2,8)
print(f'passing Two arguments 2,8 :{mul_result}')

mul_all = multiply_all(2,3,4,5,6,7)
print(f'multiply all elements {mul_all}')