print("--- Operator Precedence Examples ---")
#PEMDAS

# Example 1: Multiplication before Addition
result1 = 10 + 5 * 2
# Evaluation: 5 * 2 is 10, then 10 + 10 is 20
print(f"10 + 5 * 2 = {result1}")  # Output: 20

# Example 2: Parentheses Override Precedence
result2 = (10 + 5) * 2
# Evaluation: (10 + 5) is 15, then 15 * 2 is 30
print(f"(10 + 5) * 2 = {result2}") # Output: 30

# Example 3: Exponentiation before Multiplication/Unary Minus
result3 = 10 * 2 ** 3
# Evaluation: 2 ** 3 is 8, then 10 * 8 is 80
print(f"10 * 2 ** 3 = {result3}") # Output: 80

result4 = -3 ** 2
# Evaluation: 3 ** 2 is 9, then apply unary minus -> -9
# Note: This is different from (-3) ** 2 which would be 9
print(f"-3 ** 2 = {result4}") # Output: -9

result5 = (-3) ** 2
print(f"(-3) ** 2 = {result5}") # Output: 9

# Example 4: Division and Multiplication (Left-to-Right)
result6 = 100 / 10 * 2
# Evaluation: 100 / 10 is 10.0, then 10.0 * 2 is 20.0
print(f"100 / 10 * 2 = {result6}") # Output: 20.0

# Example 5: Arithmetic before Comparison
result7 = 5 + 10 > 2 * 7
# Evaluation: 5 + 10 is 15, 2 * 7 is 14. Then 15 > 14 is True
print(f"5 + 10 > 2 * 7 = {result7}") # Output: True

# Example 6: Boolean Operators (not, and, or)
result8 = True or not False and False
# Evaluation: 'not False' is True. Then 'True and False' is False. Then 'True or False' is True.
print(f"True or not False and False = {result8}") # Output: True

result9 = (True or not False) and False
# Evaluation: Parentheses first. 'not False' is True. 'True or True' is True. Then 'True and False' is False.
print(f"(True or not False) and False = {result9}") # Output: False

# Example 7: Mixed Operators
result10 = 2 + 3 * 4 ** 2 // 8 - 1
# Evaluation:
# 1. Exponentiation: 4 ** 2 = 16
# 2. Multiplication/Floor Division (left-to-right): 3 * 16 = 48, then 48 // 8 = 6
# 3. Addition/Subtraction (left-to-right): 2 + 6 = 8, then 8 - 1 = 7
print(f"2 + 3 * 4 ** 2 // 8 - 1 = {result10}") # Output: 7