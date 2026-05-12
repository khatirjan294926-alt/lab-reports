#include <iostream>
using namespace std;

struct Book {
    string title;
    string author;
    float price;
    int pages;
};

int main() {

    // Declare and initialize two structure variables
    Book book1 = {"C++ Basics", "John Smith", 450.5, 300};
    Book book2 = {"Data Structures", "Mark Lee", 600.0, 500};

    // Display book1 details
    cout << "Book 1 Details:" << endl;
    cout << "Title: " << book1.title << endl;
    cout << "Author: " << book1.author << endl;
    cout << "Price: " << book1.price << endl;
    cout << "Pages: " << book1.pages << endl;

    cout << endl;

    // Display book2 details
    cout << "Book 2 Details:" << endl;
    cout << "Title: " << book2.title << endl;
    cout << "Author: " << book2.author << endl;
    cout << "Price: " << book2.price << endl;
    cout << "Pages: " << book2.pages << endl;

    return 0;
}