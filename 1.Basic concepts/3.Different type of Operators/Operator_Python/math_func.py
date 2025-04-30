import math

print("--- Python Math Function Examples ---")

# --- Basic Arithmetic (Built-in, no import needed) ---
a = 10
b = 3
print(f"{a} + {b} = {a + b}")      # Addition
print(f"{a} - {b} = {a - b}")      # Subtraction
print(f"{a} * {b} = {a * b}")      # Multiplication
print(f"{a} / {b} = {a / b}")      # True Division (results in float)
print(f"{a} // {b} = {a // b}")     # Floor Division (discards remainder)
print(f"{a} % {b} = {a % b}")       # Modulo (remainder)
print(f"{a} ** {b} = {a ** b}")     # Exponentiation (a to the power of b)
print(f"Absolute value of -5: {abs(-5)}") # Absolute value
print(f"Rounding 3.14159 to 2 decimals: {round(3.14159, 2)}") # Rounding

# --- Functions from the 'math' module ---

# Rounding Functions
x = 4.3
y = 5.8
print(f"\n--- Rounding ---")
print(f"math.ceil({x}) = {math.ceil(x)}")      # Ceiling: Smallest integer >= x
print(f"math.floor({y}) = {math.floor(y)}")    # Floor: Largest integer <= y
print(f"math.trunc(5.8) = {math.trunc(5.8)}")  # Truncate: Remove fractional part (towards zero)

# Power and Logarithmic Functions
print(f"\n--- Power & Logarithms ---")
print(f"math.sqrt(16) = {math.sqrt(16)}")     # Square root (always float)
print(f"math.pow(3, 4) = {math.pow(3, 4)}")   # Power (3^4), similar to **, returns float
print(f"math.exp(2) = {math.exp(2)}")       # e raised to the power of 2 (e^2)
print(f"math.log(100, 10) = {math.log(100, 10)}") # Logarithm of 100 with base 10
print(f"math.log10(1000) = {math.log10(1000)}")  # Base-10 logarithm
print(f"math.log2(8) = {math.log2(8)}")        # Base-2 logarithm
print(f"math.log(math.e) = {math.log(math.e)}")# Natural logarithm (base e)

# Trigonometric Functions (Angles are in Radians by default!)
print(f"\n--- Trigonometry (Angles in Radians) ---")
angle_rad = math.pi / 4 # 45 degrees in radians
print(f"math.sin({angle_rad:.4f}) = {math.sin(angle_rad):.4f}")  # Sine
print(f"math.cos({angle_rad:.4f}) = {math.cos(angle_rad):.4f}")  # Cosine
print(f"math.tan({angle_rad:.4f}) = {math.tan(angle_rad):.4f}")  # Tangent

# Angle Conversion
print(f"\n--- Angle Conversion ---")
degrees = 90
radians = math.pi / 2
print(f"{degrees} degrees to radians: {math.radians(degrees):.4f}")
print(f"{radians:.4f} radians to degrees: {math.degrees(radians)}")

# Constants
print(f"\n--- Constants ---")
print(f"Value of pi (π): {math.pi}")
print(f"Value of e (Euler's number): {math.e}")

# Combinatorics & Factorial
print(f"\n--- Combinatorics ---")
print(f"math.factorial(5) = {math.factorial(5)}") # 5! = 5*4*3*2*1

# Check Python version for comb and perm (Python 3.8+)
import sys
if sys.version_info >= (3, 8):
    print(f"Combinations C(6, 2): math.comb(6, 2) = {math.comb(6, 2)}") # nCr
    print(f"Permutations P(6, 2): math.perm(6, 2) = {math.perm(6, 2)}")   # nPr

# Other Useful Functions
print(f"\n--- Other Functions ---")
print(f"Greatest Common Divisor gcd(48, 180) = {math.gcd(48, 180)}")

# Check Python version for lcm (Python 3.9+)
if sys.version_info >= (3, 9):
     print(f"Least Common Multiple lcm(12, 18) = {math.lcm(12, 18)}")

# Accurate floating point summation
nums = [0.1] * 10 # [0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1]
print(f"Sum of {nums} using sum(): {sum(nums)}") # May have precision issues
print(f"Sum of {nums} using math.fsum(): {math.fsum(nums)}") # More accurate

# Floating point comparison
a = 0.1 + 0.2
b = 0.3
print(f"Is {a} == {b}? {a == b}") # Might be False due to precision
print(f"Is {a} close to {b}? math.isclose(a, b) = {math.isclose(a, b)}") # Better way

# Checking for special values
inf_val = float('inf')
nan_val = float('nan')
print(f"Is {inf_val} infinite? math.isinf(inf_val) = {math.isinf(inf_val)}")
print(f"Is {nan_val} NaN? math.isnan(nan_val) = {math.isnan(nan_val)}")