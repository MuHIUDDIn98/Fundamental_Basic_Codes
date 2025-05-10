data_stream = [1, 2, 'error', 3, 'corrupt', 4]
i = 0
while i < len(data_stream):
    if isinstance(data_stream[i], str):
        data_stream.pop(i)
    else:
        i += 1
print(data_stream) # Output: [1, 2, 3, 4]