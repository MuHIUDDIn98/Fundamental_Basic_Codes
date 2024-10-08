#include<iostream>
using namespace std;

typedef struct book {
    int pages;
    float price;
} Book;

void display(Book *book) {
    cout << "Pages: " << book->pages << ", Price: $" << book->price << endl;
}

void changeDetails(Book *book, int pages, float price) {
    book->pages = pages;
    book->price = price;
}

int main() {
    Book b = {350, 19.99};
    display(&b);
    changeDetails(&b, 500, 24.99);
    display(&b);
}
