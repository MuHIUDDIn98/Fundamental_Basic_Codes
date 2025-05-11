# Problem: numbers = [10, -5, 20, -15, 30]. 
# Create a new list positives_only containing only the positive numbers 
# from numbers using a for loop. 
# Solution:

numbers = [10, -5, 20, -15, 30]
posivite_only=[]

for num in numbers:
    if num >0:
        posivite_only.append(num)

print(posivite_only)

p_only=[num for num in numbers if num>0]
print(p_only)