#include <iostream>
#include <cmath>

using namespace std;

//create a class (template/specification)
class Book {
    public:
        string title;
        string author;
        int pages;
};

int main()
{
    //create a book object (instance)
    Book book1;
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;

    Book book2;
    book2.title = "Papa is Coming";
    book2.author = "Ling Dai";
    book2.pages = 250;

    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.pages << endl;

    cout << book2.title << endl;
    cout << book2.author << endl;
    cout << book2.pages << endl;

    return 0;
}

