
#read   
file = open("test.txt" ,  "r")
x = file.read()
print(x)


#writng
file1 = open("writeTesting.txt", "w") #creating new file in folder
file1.write("testing" + "\n")
file1.write("files" + "\n")
file1.close()

#using for loop to write list items
x = ['apple','mango','oranges','grapes','banana']
file2 = open("fruits.txt" ,"w") 
for items in x:
    file2.write(items + "\n")
file2.close()

#appending 
file2 = open("fruits.txt","a")
file2.write("jack fruit")
file2.close()