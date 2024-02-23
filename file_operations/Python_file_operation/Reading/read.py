test_file = open('test.txt')
#Read all the content of the file
print(test_file.read())
test_file.close()
print("=====================")
test_file = open('test.txt')
print(test_file.read(10)) # 1 to n-1
test_file.close()