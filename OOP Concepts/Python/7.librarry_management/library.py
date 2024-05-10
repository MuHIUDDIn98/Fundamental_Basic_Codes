class Book:
    def __init__(self,cat,id,name,quan):
        self.id = id
        self.name = name
        self.cat = cat
        self.quan = quan


class User:
    def __init__(self,id,name,password):
        self.name= name
        self.id = id
        self.password = password
        self.borrowedBooks = []


class Library:
    def __init__(self,name,owner):
        self.owner = owner
        self.name = name
        self.Books = []
        self.Users = []
    
    def addBook(self,cat,id,name,q):
        book = Book(cat,id,name,q)
        self.Books.append(book)
    
    
    def addUser(self,id,name,password):
        usr = User(id,name,password)
        self.Users.append(usr)
        return usr
     
    def borrowBook(self,user,id):
        for book in self.Books:
            if book.id == id:
                if book in user.borrowedBooks:
                    print("\n\t already borrowd ! ")
                    return
                elif book.quan <1:
                    print("\n\t not enough books left")
                    return
                else:
                    user.borrowedBooks.append(book)
                    book.quan-=1
                    print(f"sussessfully borrowed books {book.name}")
                    return
                    
        print(f"No book found named this Id {id}")   


Phitron_Library = Library("Mahbub","Phitron Library")

admin  = Phitron_Library.addUser(1,"admin","admin")
anik = Phitron_Library.addUser(3,"anik","anik123")

pyBook = Phitron_Library.addBook("sci-fi",232,"Dune",5)

Phitron_Library.borrowBook("anik",232)

print(admin)
print(anik)