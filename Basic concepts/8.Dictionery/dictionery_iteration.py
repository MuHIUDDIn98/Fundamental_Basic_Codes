employeeData = {"name":"Anik","number":"01521327657","DOB":1998}

employeeData["Department"] = "IT"
employeeData["Designation"] = "SQA"
employeeData["Home address"] = "Mogbazar"

for item in employeeData.keys():
    print(employeeData[item])


for key,value in employeeData.items():
    print(f'key:{key}, value:{value}')
    

employeeCopy = employeeData.copy()
print(employeeCopy)
