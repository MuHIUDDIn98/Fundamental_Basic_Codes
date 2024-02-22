balance = 580 #it is not recommanded

def total_cost(price,quantity):
    global balance
    cost = price * quantity
    balance = cost
    return cost

pay = total_cost(10,30)
print(f'Please pay : {pay}')
print(f'balance :{balance}')