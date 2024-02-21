from typing import Any


class person:
    def __init__(self,name,age,height,money):
        self.name = name
        self.age  = age
        self.money = money
        self.height = height
        
    def __add__(self,other):
        return self.age + other.age
    
    def __call__(self):
        print(f'Name :{self.name}, age: {self.age}, Money :{self.money}')
        
    def __eq__(self, other):
        return self.age == other.age

    def __len__(self):
        return self.height
        
        
alim = person("alim",32,65,4354532)
dalim = person("dalim",45,67,5345434)

print(alim+dalim)
alim()
print(alim==dalim)
print(len(alim))
print(len(dalim))
