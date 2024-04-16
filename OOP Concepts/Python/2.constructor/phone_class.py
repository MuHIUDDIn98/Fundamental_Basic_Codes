class Phone:
    def __init__(self, brand, price):
        self.brand = brand
        self.price = price
    
    def call(self):
        pass
    
samsung = Phone("Samsung", "90000")
iphone = Phone('Apple', '150000')
print(samsung.brand) #output: Samsung
print(iphone.brand) #output: Apple