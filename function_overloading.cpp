#include <iostream>
#include <cmath>

using namespace std;

//Function Overloading
//In C++, we can build more than multiple functions with the same name

void printNumber(int x){
    cout << "I am printing an integer " << x << endl;
}

void printNumber(float x){
    cout << "I am printing a float " << x << endl;
}

int main()
{
    int a = 54;
    float b = 32.4896;

    printNumber(a);
    printNumber(b);

    return 0;
}
