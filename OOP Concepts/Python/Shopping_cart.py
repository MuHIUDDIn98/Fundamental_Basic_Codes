
price_dic={"mosquitto_bat":1,"Tea":2,"Milk":3,"Sugar":4,"coffe":5}

class customer:
    
    cart=[]
   
    def __init__(self,c_name):
        self.c_name = c_name
        
    def add_to_cart(self,item):
        self.cart.append(item)
        
    def show_cart(self):
        print(f'Customer Name :{self.c_name}')
        print(f'Orderd Items :{self.cart}')
        

    
    def total_cost(self):
        total = 0
        for e in self.cart:
            if e in price_dic:
                total += price_dic[e]
                
        return total
                
            
            
    


c1 = customer("Rayhan")
c1.add_to_cart("mosquitoo_bat")
c1.add_to_cart("Tea")
c1.add_to_cart(" Milk")
c1.add_to_cart("sugar")
c1.show_cart()
print(f'total cost : {c1.total_cost()}')
        
        
c2 = customer("anik")
c2.add_to_cart("coffe")
c2.add_to_cart("sugar")
c2.show_cart()
print(f'total price : {c2.total_cost()}')   
        