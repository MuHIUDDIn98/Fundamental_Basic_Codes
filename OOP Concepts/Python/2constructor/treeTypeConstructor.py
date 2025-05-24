class car:
    def __init__(self,brand,model): #parameterized constructor no return 
        self.brand=brand
        self.model=model
    def __init__(self): # defaul constructor no return
        self.brand=""
        self.model=""
    def __init__(self,model="default Mode",brand="default brand"): #default value constructor no return 
        self.brand=brand
        self.model=model




car1=car("toyota","corolla")
print(car1.brand)
print(car1.model)

car2=car()
print(car2.brand)
print(car2.model)    