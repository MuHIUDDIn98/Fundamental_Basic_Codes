data_points = [[1, 2], [3, 4], [5, 6]]
print(data_points[1][1]) # Output: 4
print(data_points[1][0]) # Output: 4

data_points = [[1, 2], [3, 4], [5, 6]]
print(data_points[0][0]) # Output: 1


matrix = [["a", "b"], ["c", "d"]]
print(matrix[1][1]) # Output: d


#deep_list = [0, [10, [200, 201], 12], 2]. Access and print 201

deep_list = [0, [10, [200, 201], 12], 2]
print(deep_list[1][1][1])# Output: 201


word_list = ["PYTHON", "LISTS", "ARE", "FUN"]
print(word_list[1][0]) # Output: L


values = [5, 15, 25, 35, 45]
last_index = len(values) - 1
print(values[last_index]) # Output: 45
