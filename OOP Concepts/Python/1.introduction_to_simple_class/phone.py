class Phone:
    price = 1900
    color = 'blue'
    brand = 'samsung'
    def call(self):
        print("calling")
    def send_message(self, message):
        return f'Sending message: {message}'
        

Myphone = Phone()
print(Myphone.price)
print(Myphone.color)
Myphone.call()
print(Myphone.send_message("hello python"))
