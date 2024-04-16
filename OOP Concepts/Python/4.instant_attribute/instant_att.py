class Shop:
    
    def __init__(self, buyer):
        self.buyer = buyer
        self.cart = []
    
    def add_to_cart(self, product):
        self.cart.append(product)
        
mamun = Shop("Mamun")
mamun.add_to_cart("Shoes")
mamun.add_to_cart("Shirt")
print("After mamun added:", mamun.cart)

mahmud = Shop("Mahmud")
mahmud.add_to_cart('Cap')
mahmud.add_to_cart("Watch")
print("After mahmud added:", mahmud.cart)