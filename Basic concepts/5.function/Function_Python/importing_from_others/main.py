import args as a
#from args import *
from args import add
import random
import datetime as dt


sum = a.add(2,3)
print(f'sum 2 + 3 : {sum}')

mul = a.mul(2,5)
print(f'mul 2 * 3 :{mul}')



sum1 = add(2,5) #from args import add
print(f'sum 2 + 5 : {sum1}')


winner = random.choice([4,6,7,3,21,54,91,56])
print(f'random choice :{winner}')
now = dt.datetime.now()
formatted_datetime = now.strftime("%Y-%m-%d %H:%M:%S %Z")
print(f"The current datetime in your local timezone is: {formatted_datetime}")

