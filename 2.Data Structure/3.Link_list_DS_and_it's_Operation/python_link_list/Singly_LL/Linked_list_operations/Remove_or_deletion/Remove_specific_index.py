class Node:
    def __init__(self, value):
        self.value = value
        self.next = None



class LinkedList:
    def __init__(self, value):
        
        new_node = Node(value)
        self.head = new_node
        self.tail = new_node
        self.length = 1
    
    def print_list(self):
        temp = self.head
        while temp is not None:
            print(temp.value)
            temp = temp.next
    
    def prepend(self,value):
        new_node = Node(value)
        if self.length == 0:
            self.head = new_node
            self.tail = new_node
        else:
            new_node.next = self.head
            self.head = new_node
        self.length+=1
        return True
    
    def append(self,value):
        new_node = Node(value)
        if self.length == 0:
            self.head = new_node
            self.tail = new_node
        else:
            self.tail.next = new_node
            self.tail = new_node
        self.length+=1
    
    def get(self,index):
        if index <0 or index >= self.length:
            return None
        temp = self.head
        for _ in range(index):
            temp=temp.next
            
        return temp
        
    
    def pop(self):
        if self.length == 0:
            return None
        temp = self.head
        pre = self.head
        while(temp.next):
            pre = temp
            temp = temp.next
        self.tail = pre
        self.tail.next = None
        self.length-=1
        return temp.value
    
    def pop_left(self):
        if self.length == 0:
            return None
        temp = self.head
        self.head = self.head.next
        temp.next = None
        self.length-=1
        if self.length == 0:
            self.tail = None
        return temp
    
    def remove(self,index):
        if index < 0 or index >self.length:
            return None
        if index == 0:
            return self.pop_left()
        if index == self.length -1:
            return self.pop()
        
        pre = self.get(index-1)
        temp = pre.next
        pre.next = temp.next
        temp.next = None
        self.length -=1
        return temp
        
         
        
        

my_ll = LinkedList(4)
print(f'prepend  {my_ll.prepend(4444)}')
print(f'prepend  {my_ll.prepend(45)}')
print(f'prepend  {my_ll.prepend(44)}')
print(f'prepend  {my_ll.prepend(43)}')
print(f'prepend  {my_ll.prepend(42)}')
print(f'prepend  {my_ll.prepend(41)}')
print(f'apppend  {my_ll.append(46)}')
my_ll.print_list()

print(f'remove index 0  {my_ll.remove(0)}')
my_ll.print_list()
print(f'remove index 3  {my_ll.remove(3)}')
my_ll.print_list()
print(f'remove index last {my_ll.remove(5)}')    
my_ll.print_list()
