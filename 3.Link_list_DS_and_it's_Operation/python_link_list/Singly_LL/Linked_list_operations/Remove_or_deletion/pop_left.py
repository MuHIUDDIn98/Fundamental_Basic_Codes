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
           
    
        
                


my_ll = LinkedList(4)
print(f'prepend  {my_ll.prepend(4444)}')
print(f'prepend  {my_ll.prepend(45)}')
print(f'prepend  {my_ll.prepend(44)}')
print(f'prepend  {my_ll.prepend(43)}')
print(f'prepend  {my_ll.prepend(42)}')
print(f'prepend  {my_ll.prepend(41)}')
my_ll.print_list()

for _ in range(4):    
    print(f'pop_left {my_ll.pop_left().value}')
    
my_ll.print_list()
