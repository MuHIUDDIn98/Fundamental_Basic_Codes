from typing import Any


class Student:
    def __init__(self,name,id,_Class):
        self.name = name
        self.id = id
        self.Class = _Class
    def __repr__(self) -> str:
        return f'Name:{self.name} ,ID:{self.id},Class:{self.Class}'
    
class Teacher:
    def __init__(self,name,id,subject):
        self.name = name
        self.id = id
        self.subject = subject
    def __repr__(self) -> str:
        return f'Name :{self.name} ,Subject :{self.subject}, Id :{self.id} '
    

class School:
    def __init__(self,name):
        self.name = name
        self.teachers = []
        self.students = []
    def addteacher(self,name,subject):
        id = len(self.teachers) + 101
        teacher = Teacher(name,subject,id)
        self.teachers.append(teacher)
        
    def enroll(self,name,fee):
        if fee < 6500:
            return f'not enough fee please give more {6500-fee} tk'
        else:
            id = len(self.students) + 102
            student = Student(name,id,'C')
            self.students.append(student)
            return f'name: {name} ,give fee :{fee}'
    
    def __repr__(self) -> str:
        print('welcome to', self.name)
        print('--------OUR Teachers--------')
        for teacher in self.teachers:
            print(teacher)
        print('--------OUR STUDENTS--------')
        for student in self.students:
            print(student)
        return 'All Done for now'   
        


phitron = School('Phitron')
phitron.enroll('alia', 5200)
phitron.enroll('rani', 8000)
phitron.enroll('aishwaraiya', 7000)
phitron.enroll('vaijaan', 90000)

phitron.addteacher('Tom Cruise', 'Algo')
phitron.addteacher('Decap', 'DS')
phitron.addteacher('AJ', 'Database')

print(phitron)