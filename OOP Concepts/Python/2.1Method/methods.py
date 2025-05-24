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

    def displayInfo(self):
        print(f"car brand {self.brand} \ncar model :{self.model}")






car1=car("toyota","corolla")
car1.displayInfo()

car2=car()
car2.displayInfo()   

car3=car("audi","audi6654")
car3.displayInfo()