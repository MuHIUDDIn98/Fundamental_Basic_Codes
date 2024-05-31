print("all odd numbers")
for num in range(1,20):
    if num % 2 == 0:
        continue
    print(num,end=" ")

print("")
print("all even numbers")
for num in range(1,20):
    if num % 2 !=0:
        continue
    print(num,end=" ")
