class shop:
    def __init__(self, name):
        self.name = name
        self.products = []
    
    def add_product(self,name,price):
        p = product(name,price)
        self.products.append(p)  
        
    def __repr__(self):
        return f'this shop name is {self.name}'


class product:
    def __init__(self, name, price):
        self.name = name
        self.price = price
    def __repr__(self):
        return f'name :{self.name} , price :{self.price}'
        

shop1 = shop("test shop")
shop1.add_product("iphone",50000)
shop1.add_product("Macbook",100000)

shop2 = shop("test shop2")
shop2.add_product("samsung phone",450000)
shop2.add_product("Lg phone",43000)

print(shop1)
print(shop1.products)

print(shop2)
print(shop2.products)