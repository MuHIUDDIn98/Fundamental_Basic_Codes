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

mul_unknown = multiply_all(1,2,3,4,5,6)
print(mul_unknown)


sum = sum(1,2,3,4,5)
print(sum)