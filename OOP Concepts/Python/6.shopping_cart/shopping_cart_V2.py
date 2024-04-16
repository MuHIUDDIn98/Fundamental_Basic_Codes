
class customer: 
    def __init__(self, c_name):
        self.c_name = c_name
        self.cart   = []
        
    def add_to_cart(self, item,price, quantity):
        self.cart.append({"item":item,"price":price,"quantity":quantity})
    
    def checkOut(self,amount):
        print(self.c_name)
        print(self.cart)
        price = 0
        for item in self.cart:
            price += item["price"] * item["quantity"]
        if amount<price:
            print(f'give me more {price-amount} taka')
        else:
            print(f'you will get {amount-price} soon')
        
   
                
customer1 = customer("anik")
customer1.add_to_cart("biscuit",40,2)
customer1.add_to_cart("cake",45,3)
customer1.checkOut(2999)
