#include <iostream>
#include <cmath>

using namespace std;

//create a class (template/specification)
class Book {
    public:
        string title;
        string author;
        int pages;
        //constructor function
        Book(string aTitle, string aAuthor, int aPages) {
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }
};

int main()
{
    //create a book object (instance)
    Book book1("Harry Popo", "JK Bowling", 500);

    Book book2("Papa is Coming", "Ling Dai", 275);

    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.pages << endl;

    cout << book2.title << endl;
    cout << book2.author << endl;
    cout << book2.pages << endl;

    return 0;
}

