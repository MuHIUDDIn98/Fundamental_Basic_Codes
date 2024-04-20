employeeData = {"name":"Anik","number":"01521327657","DOB":1998}

employeeData["Department"] = "IT"
employeeData["Designation"] = "SQA"
employeeData["Home address"] = "Mogbazar"
#looping through all keys
for item in employeeData.keys():
    print(employeeData[item])

#looping through all key and value
for key,value in employeeData.items():
    print(f'key:{key}, value:{value}')
    

employeeCopy = employeeData.copy()
print(employeeCopy)
