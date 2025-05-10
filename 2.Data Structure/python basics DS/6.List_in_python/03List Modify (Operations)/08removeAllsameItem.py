data = [10, 20, 10,30, 20, 40, 20,40]
value_to_remove = int(input())
for value in data:
    if value == value_to_remove:
        data.remove(value)


print(data)