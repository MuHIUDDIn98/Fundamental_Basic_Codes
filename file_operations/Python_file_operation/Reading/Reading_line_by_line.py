test_file = open('test.txt')

# #Read single line at a  time
# print(test_file.readline())
# print(test_file.readline())

#========================================
# #print line by line using while 
# line = test_file.readline()
# while line !="":
#     print(line)
#     line = test_file.readline()


#========================================
#it will stores all lines in a list
#print(test_file.readlines())
for line in test_file.readlines():
    print(line)


test_file.close()