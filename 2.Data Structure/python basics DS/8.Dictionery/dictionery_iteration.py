employeeData = {"name":"Anik","number":"01521327657","DOB":1998}
emp_key_list=[]
emp_val_list=[]

employeeData["Department"] = "IT"
employeeData["Designation"] = "SQA"
employeeData["Home address"] = "Mogbazar"

print("All employeeData values :")
#looping through all keys and print  values
for item in employeeData.keys():
    emp_val_list.append(employeeData[item])
    emp_key_list.append(item)
    print(employeeData[item],end=" ")

print()
print(emp_key_list)
print(emp_val_list)
print()
print()

print("iterating all values: ")
for _,val in employeeData.items():
    print(val,end=" ")


print()
print()
#looping through all key and value
print("All key values from dictionery :")
for key,value in employeeData.items():
    print(f'key:{key}, value:{value}')
    

employeeCopy = employeeData.copy()
print(employeeCopy)
