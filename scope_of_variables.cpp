#include <iostream>
#include <cmath>

using namespace std;

int tuna = 20; //global variable, can be accessed by every function

int main()
{
    double tuna = 69; // local variable, accessible only to this function
    //a function will always choose the local variable over the global variable
    //when the variables have the same name

    cout << tuna << endl;
    cout << ::tuna << endl; // use :: to access the global variable over the local one

    return 0;
}
