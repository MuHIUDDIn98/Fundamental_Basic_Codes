class bankAccount:
    def withdraw_money(self):
        print("Money withdraw!!!")

class SavingAccount(bankAccount):
    def haha(self):
        print("Ha "*10)



class MoneyManager:
    def janina(self):
        print("kisu jani na")

class currentAccount(SavingAccount,MoneyManager):
    def lala(self):
        print("la la"*5)

sa_1=SavingAccount()
sa_1.haha()
sa_1.withdraw_money()


cr_a=currentAccount()

cr_a.haha()
cr_a.lala()
cr_a.withdraw_money()
cr_a.janina()