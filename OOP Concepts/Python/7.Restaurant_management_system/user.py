
from abc import ABC

class User(ABC):
    def __init__(self,name,age,email,address,phone):
        self.name  = name
        self.age = age
        self.email = email
        self.address = address
        self.phone = phone
        

class Employee(User):
    def __init__(self, name, age, email, address, phone,designation, salary,id):
        super().__init__(name, age, email, address, phone)
        self.designation = designation
        self.salary = salary
        self.id = id
    
    

    
        
      