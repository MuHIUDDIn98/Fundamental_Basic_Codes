num1 = 11
num2 = num1

print("Before num2 value is updated: ")
print("num1 =", num1)
print("num2 =", num2)


print("\n num1 points to this address :",id(num1))
print("num2 points to this address  :", id(num2))

num2 = 22

print("\n after num2 value is updated: ")
print("num1 =", num1)
print("num2 =", num2)


print("\n num1 points to this address :",id(num1))
print("num2 points to this address  :", id(num2))
