#include <iostream>

using namespace std;

int main()
{
    cout << "My name is Papadox\n";
    cout << "I am learning C++" << endl;

    string phrase = "Ultraman";
    cout << "I want to become an " << phrase << endl;

    /* length();//*/
    cout << phrase.length() << endl;

    /*indexing and modifying a string;//*/
    cout << phrase[0] << endl;
    phrase[0] = 'u';
    cout << phrase << endl;

    /*void find(substring, starting_index);//*/
    cout << phrase.find("man",2) << endl;

    /*void substr(starting_index, length); //*/
    cout << phrase.substr(1,4) << endl;

    return 0;
}
