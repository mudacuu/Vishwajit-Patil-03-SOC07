#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string title;
    string author;
    double price;

public:
    
    Book(string t, string a, double p) : title(t), author(a), price(p) {
        cout << "Parameterized constructor called for: " << title << endl;
    }

    
    Book(const Book &other) : title(other.title), author(other.author), price(other.price) {
        cout << "Copy constructor called for: " << title << endl;
    }

    
    void display() const {
        cout << "Title:  " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price:  $" << price << endl;
        cout << "---------------------------" << endl;
    }
};

int main() {
    
    Book book1("1984", "George Orwell", 15.99);
    book1.display();

    
    Book book2(book1);     
    book2.display();

    Book book3 = book1;     
    book3.display();

    return 0;
}