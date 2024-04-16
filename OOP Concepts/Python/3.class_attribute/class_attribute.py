class shop:
    cart=[]
    def __init__(self,buyer):
        self.buyer = buyer
    def add_to_cart(self,product):
        self.cart.append(product)

mamun = shop("Mamun")
mamun.add_to_cart("water")
mamun.add_to_cart("coke")

print(mamun.cart)


kamal = shop("kamal")
kamal.add_to_cart("shirt")
kamal.add_to_cart("pant")

print(kamal.cart)