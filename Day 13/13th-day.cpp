/*
Task
Given a Book class and a Solution class, write a MyBook class that does the following:
• Inherits from Book |
• Has a parameterized constructor taking these 3 parameters:
1. string title
2. string author
3. int price

• Implements the Book class' abstract display method so it prints these 3 lines:
1. Title:, a space, and then the current instance's title.
2. Author:, a space, and then the current instance's author.
3. Price:, a space, and then the current instance's price.

Note: Because these classes are being written in the same file, you must not use an access modifier (e.g.: publie) when declaring MyBook or your code will not execute.
*/


#include <iostream>
#include <string>

using namespace std;

class Book {
protected:
    string title;
    string author;
public:
    Book(string t, string a) : title(t), author(a) {}
    
    virtual void display() = 0;
};

class MyBook : public Book {
private:
    int price;
public:
    MyBook(string t, string a, int p) : Book(t, a), price(p) {}

    void display() override {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    string title, author;
    int price;

    getline(cin, title);
    getline(cin, author);
    cin >> price;
    cin.ignore();

    MyBook book(title, author, price);
    book.display();

    return 0;
}
