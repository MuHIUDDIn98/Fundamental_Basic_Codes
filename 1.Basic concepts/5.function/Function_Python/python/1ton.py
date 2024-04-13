def generate_array(n):
    if n == 1:
        return [1]
    else:
        return generate_array(n - 1) + [n]

# Example usage:
n = int(input("Enter the value of n: "))
result = generate_array(n)
print(*result)  # Print the array elements separated by space
