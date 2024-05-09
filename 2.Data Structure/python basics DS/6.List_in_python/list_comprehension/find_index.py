list = [1,5,7,3,9,12,6]
value = 5
new_list = [i for i,j in enumerate(list) if j > value]
print(new_list)
new_element_list = [list[i] for i,j in enumerate(list) if j > value]
print(new_element_list)