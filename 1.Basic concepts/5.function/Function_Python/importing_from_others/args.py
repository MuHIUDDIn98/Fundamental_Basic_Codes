def add(num1,num2):
    total = num1+num2
    return total


def mul(num1,num2=1): #default value num2 = 1,  we use default parameter always right side
    return  num1 * num2

def multiply_all(*numbers):
    print(f'all elements in tuples {numbers}')
    results = 1
    for num in numbers:
        #print(f'num :{num}')
        results*=num
        #print(f'results: {results}')
    return results

