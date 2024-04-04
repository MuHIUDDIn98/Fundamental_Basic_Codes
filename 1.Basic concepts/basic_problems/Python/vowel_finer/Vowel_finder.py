data = "aNTErOUr\n\t>>"

Lower_data = data.lower()
Output_data = ""
for char in Lower_data:
    if char == 'a' or char == 'e' or char == 'i' or char == 'o' or char == 'u':
        Output_data+=char + " "
        
print(Output_data)