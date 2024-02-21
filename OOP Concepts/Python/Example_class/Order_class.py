class MoblieOrder:
    def __init__(self,Name,Weight,Price,Brand,features): #constructor
        self.Name = Name
        self.Weight = Weight
        self.Price = Price
        self.Brand = Brand
        self.features = features
    def printOrder(self):
        print("Name :",self.Name)
        print("Weight:",self.Weight)
        print("Price :",self.Price)
        print("Brand :",self.Brand)
        print(f'Featurs :{self.features}')
        
        
        

samsung = MoblieOrder("samsung A10",120,23000,"Samsung",["good camera","OLED display","slow processor"])
infinix = MoblieOrder("Infinix Hot 11s",110,1500,"Infinix",["can be used as hammer","poor camera","slow processor"])

samsung.printOrder()
print("===================")
infinix.printOrder()
    
    
    

    