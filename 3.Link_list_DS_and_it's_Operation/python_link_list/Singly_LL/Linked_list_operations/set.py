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
