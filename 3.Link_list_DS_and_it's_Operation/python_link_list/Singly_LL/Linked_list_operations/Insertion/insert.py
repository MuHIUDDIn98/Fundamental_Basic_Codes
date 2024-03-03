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
    
    def set_value(self,index,value):
        temp = self.get(index)
        if temp:
            temp.value = value
            return True
        return False
    
    def insert(self,index,value):
        if index < 0 or index >self.length:
            return False
        if index == 0:
            return  self.prepend(value)
        if index == self.length:
            return self.append(value)
        new_node = Node(value)
        temp = self.get(index-1)
        new_node.next = temp.next
        temp.next = new_node
        self.length +=1
        return True
    
    
        
        
    
    
    
    
        
            

my_ll = LinkedList(4)
print(f'prepend  {my_ll.prepend(4444)}')
print(f'prepend  {my_ll.prepend(45)}')
print(f'prepend  {my_ll.prepend(44)}')
print(f'prepend  {my_ll.prepend(43)}')
print(f'prepend  {my_ll.prepend(42)}')
print(f'prepend  {my_ll.prepend(41)}')
my_ll.print_list()


print(f'your searched index element is :{my_ll.get(3).value}')
my_ll.set_value(3,555)
print(f'your searched index element is :{my_ll.get(3).value}')
print(f'Insert at :{my_ll.insert(3,3333)}')
my_ll.print_list()
