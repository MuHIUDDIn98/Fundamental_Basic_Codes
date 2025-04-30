# 1. Define variables
age = 25
f_name = "Rahim"
l_name = "Khan"

# 2. Define the template string with named placeholders
#    Placeholders {f_name}, {l_name}, {age} mark where values should go.
txt = "I am {f_name} {l_name}. I am {age} years old."

# 3. Call the .format() method on the template string
#    Pass keyword arguments mapping placeholder names to variable values.
#    The order of keyword arguments inside format() doesn't matter here.
txt = txt.format(l_name=l_name, f_name=f_name, age=age)

# 4. Print the resulting formatted string
print(txt)

item = "apple"
cost = 0.75
quantity = 5

# Placeholders are filled in the order arguments are passed to format()
receipt = "Item: {}, Quantity: {}, Price per item: {}, Total: {}".format(item, quantity, cost, quantity * cost)
print(receipt)
# Output: Item: apple, Quantity: 5, Price per item: 0.75, Total: 3.75