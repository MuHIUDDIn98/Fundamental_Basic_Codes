class Employee:
    def __init__(self, fname,lname, id):
        self.fname = fname
        self.lname = lname
        self.id = id
        
    def printEmpDetails(self):
        print('Emp Name :',self.fname,self.lname)
        print('Emp ID :'  , self.id)
        
        
emp1 = Employee('MD','Muhiuddin', 5050)
emp1.printEmpDetails()
