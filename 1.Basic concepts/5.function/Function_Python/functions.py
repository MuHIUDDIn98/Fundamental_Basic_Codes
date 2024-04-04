#block of code witch  runs only onece
#we pass data to a func - parameters
#function can return data as result


# def func_name(parameters):
#     statemens



def hello(name,msg):
    print("Hello",name +','+msg)


#default arguments 
def hello1(name,msg="How are you?"):
    print("Hello",name +','+msg)

def add(num1,num2):
    return (num1+num2)

#arbitrary arguments
def hello3(*names):
    print("Hello",names)
  
  
print(add(3,2))

name = "anik"
hello(name,"Good Morning")

#default argument
hello1(name)

#pass arguments
hello1(name="ashik",msg="How are you?")

#arbitrary arguments
hello3("Emran","Anika","rakib") # multiple arguments wrapped in a tuple and passed to the function

