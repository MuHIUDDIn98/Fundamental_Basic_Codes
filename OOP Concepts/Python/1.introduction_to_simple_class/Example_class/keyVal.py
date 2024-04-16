fruit = {'apple' : 1, 'mango' : 2, 'cherry' : 3}
print("The original dictionary is : " + str(fruit))

key = 'mango'
value = 0

for k in fruit:
   print("-----------")
   if k == key :
      value = fruit[k] 
      break
  
print("The the value for the key mango : " + str(value))