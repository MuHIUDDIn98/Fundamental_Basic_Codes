from abc import ABC,abstractmethod

class Shape(ABC):
    @abstractmethod
    def area(self):
        pass
    
    @abstractmethod
    def peremeter(self):
        pass

class Rectangle(Shape):
    def __init__(self,length,width) -> None:
        self.lenght = length
        self.width = width
    
    def area(self):
        return self.lenght*self.width
    
    def peremeter(self):
        return 2*(self.lenght+self.width)

class Circle(Shape):
    def __init__(self,radius) -> None:
        self.radius = radius
    def area(self):
        return 3.1416 * self.radius**2
    def peremeter(self):
        return 2*3.1416*self.radius
    


rec = Rectangle(3,4)
Cir = Circle(5)
print(rec.area())
print(rec.peremeter())

print(Cir.area())
print(Cir.peremeter())        
        