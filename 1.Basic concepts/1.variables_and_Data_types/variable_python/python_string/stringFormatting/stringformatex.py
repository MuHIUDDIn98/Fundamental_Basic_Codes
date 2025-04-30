item = "apple"
cost = 0.75
quantity = 5

# Placeholders are filled in the order arguments are passed to format()
receipt = "Item: {}, Quantity: {}, Price per item: {}, Total: {}".format(item, quantity, cost, quantity * cost)
print(receipt)
# Output: Item: apple, Quantity: 5, Price per item: 0.75, Total: 3.75