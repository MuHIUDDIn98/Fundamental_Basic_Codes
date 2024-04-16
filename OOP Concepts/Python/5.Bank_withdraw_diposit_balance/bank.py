class BANK:
    def __init__(self,balance):
        self.balance = balance
        self.max_withdraw = 10000
        self.min_withdraw = 500
        
    def get_balance(self):
        return self.balance
    
    def diposit(self,amount):
        if amount > 0:
            self.balance += amount
            return f'you are diposited tk : {amount} total balance : {self.balance}'
        else:
            return f'you are diposited tk : {0}'
            
    def withdraw_amount(self,amount):
        if amount <  self.min_withdraw:
            return f'your are not allowed to withdraw  less than 100 tk at a time min withdraw : {self.min_withdraw}'
        elif amount > self.max_withdraw :
            return f'your are not allowed to withdraw more than 10000 tk at a time max withdraw : {self.max_withdraw}'
            
        else:
            self.balance -= amount
            return f'Here is your money {amount}' + f'your balance after withdraw: {self.get_balance()}'


brack_bank = BANK(50000)
print(brack_bank.withdraw_amount(25))
print(brack_bank.withdraw_amount(10001)) 

DBBL_bank = BANK(1000000)
print(DBBL_bank.withdraw_amount(500))
print(DBBL_bank.diposit(1000))
          