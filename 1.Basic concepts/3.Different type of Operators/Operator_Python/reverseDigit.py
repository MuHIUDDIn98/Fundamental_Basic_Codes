t = int(input())
 
for _ in range(t):
    number = int(input())
    if number == 0:
        print(0)
        continue
    while(number>0):
        digit = number%10
        print(digit,end=" ")
        number = number//10
    print()