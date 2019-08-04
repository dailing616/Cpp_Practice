#include <iostream>
#include <cmath>

using namespace std;

//create a class (template/specification)
class Book {
    private:
        double rating;
    public:
        string title;
        string author;
        int pages;
        //constructor function
        Book(string aTitle, string aAuthor, int aPages, double aRating) {
            title = aTitle;
            author = aAuthor;
            pages = aPages;
            setRating(aRating);
        }

        bool isLong(){
            if(pages>=500){
                return true;
            } else{return false;
            }
        }

        void setRating(double aRating){
            if (aRating <= 10 && aRating >=0){
                    rating = aRating;
            } else {rating = -1.0;
            }
        }

        double getRating(){
            return rating;
        }
};

int main()
{
    //create a book object (instance)
    Book book1("Harry Popo", "JK Bowling", 500, 3.2);

    Book book2("Papa is Coming", "Ling Dai", 275, 9.9);

    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.pages << endl;
    cout << book1.isLong() << endl;

    cout << book2.title << endl;
    cout << book2.author << endl;
    cout << book2.pages << endl;
    cout << book2.isLong() << endl;

    cout << book2.getRating() << endl;

    return 0;
}

