class Employee:
    def __init__(self, name, id):
        self.name = name
        self.id = id
        
    def printEmpDetails(self):
        print('Emp Name :',self.name)
        print('Emp ID :'  , self.id)
        
        
emp1 = Employee('anik', 5050)
emp1.printEmpDetails()
