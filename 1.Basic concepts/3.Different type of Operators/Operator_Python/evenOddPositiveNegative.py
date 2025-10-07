list_size = int(input())
 
numbers = input().split()
 
even_count=0
odd_count = 0
positive_count = 0
negative_count = 0
 
 
for i in range(list_size):
    number = int(numbers[i])
    if number>=0:
        positive_count+=1
    elif number<0:
        negative_count+=1
        
    if number%2 == 0:
        even_count+=1
    else: 
        odd_count+=1 
        
 
print("Even:",even_count)
print("Odd:",odd_count)
print("Positive:",positive_count)
print("Negative:",negative_count)