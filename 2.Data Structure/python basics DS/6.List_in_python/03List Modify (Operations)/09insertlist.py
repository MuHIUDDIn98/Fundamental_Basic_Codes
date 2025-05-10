list_alpha = ['a', 'b']
list_beta = ['x', 'y']
list_alpha+=list_beta
print(list_alpha) #list_alpha[1:1] = list_beta # Insert items from list_beta at index 1
list_alpha.append(list_beta)
print(list_alpha)