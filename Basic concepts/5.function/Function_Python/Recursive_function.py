
#sum of 10 natural numbers

def calculate_sum(n):
    if n == 1: return 1
    else:
        return n+calculate_sum(n-1)
    
    
sum = calculate_sum(10)
print(sum)