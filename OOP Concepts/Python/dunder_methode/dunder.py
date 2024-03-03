class person:
    def __init__(self,f_name,l_name,money):
        self.f_name = f_name
        self.l_name = l_name
        self.money = money
        
    def __add__(self,other):
        return self.money +other.money
    
        
        
p1 = person("Muhiuddin","Ahmed",100)
p2 = person("Shihab","Ahmed",100)
print(p1+p2)