def print_items(n):
    for i in range(n):
        print(i)


def print_items2(n):   #O(2n) -> O(n)
    for i in range(10,n):
        print(i)
    print("==========")
    for j in range(15,n):
        print(j)
       
print_items(10)
print("===========")
print_items2(20)