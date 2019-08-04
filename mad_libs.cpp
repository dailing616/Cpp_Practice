#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    /* create 2 variables of the same type//*/
    string color, pluralNoun, person;

    cout << "Enter a color:";
    getline(cin, color);
    cout << "Enter a plural noun:";
    getline(cin, pluralNoun);
    cout << "Enter a name of a person:";
    getline(cin, person);

    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are blue." << endl;
    cout << "I love " << person <<endl;

    return 0;
}
