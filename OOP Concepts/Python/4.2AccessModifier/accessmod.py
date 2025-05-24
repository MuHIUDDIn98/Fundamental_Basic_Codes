class BankAccount:
    def __init__(self):
        self.__balance=0
        self.type = "savings"
    def cashIn(self,taka):
        self.__balance+=taka
    def show_balance(self):
        print(self.__balance)    


ba= BankAccount()
print(ba.type)
# print(ba.__balance)

ba.cashIn(600)
ba.show_balance()
ba.cashIn(600)
ba.show_balance()