class Myclass:
    pass

class Myclsss:
    a=10
    def func1(self):
        print ('Hello')
        


#creating Objects to access attribute of a clss
obj = Myclsss()
obj.func1()
print(obj.a)

# we can create multiple object for a class
obj1 = Myclsss()
obj2 = Myclsss()
obj3 = Myclsss()

#we can change object attributes

obj1.a = 3
obj2.a = 4

print(obj2.a)


