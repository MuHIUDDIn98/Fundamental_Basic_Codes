
pi = 3.14159265
large_number = 1234567.89
name = "Bob"

# Padding and Alignment: > (right), < (left), ^ (center)
# Format 'name' within a field of 10 characters, centered, padded with '*'
print("'{0:*^10}'".format(name))
# Output: '***Bob****'
print("'{0:*>10}'".format(name))
print("'{0:*<10}'".format(name))


# Controlling Decimal Places for Floats: .<precision>f
print("Pi rounded to 3 decimal places: {:.3f}".format(pi))
# Output: Pi rounded to 3 decimal places: 3.142

# Adding commas as thousands separators: ,
print("Large number with commas: {:,.2f}".format(large_number))
# Output: Large number with commas: 1,234,567.89

# Integer Formatting (Binary, Octal, Hex): b, o, x, X
number = 42
print("Number 42 in binary: {:b}".format(number))
print("Number 42 in octal: {:o}".format(number))
print("Number 42 in hex (lower): {:x}".format(number))
print("Number 42 in hex (upper): {:X}".format(number))
# Output:
# Number 42 in binary: 101010
# Number 42 in octal: 52
# Number 42 in hex (lower): 2a
# Number 42 in hex (upper): 2A

# Padding numbers with leading zeros: 0<width>
print("Padded number: {:05d}".format(number)) # d is for decimal integer
# Output: Padded number: 00042