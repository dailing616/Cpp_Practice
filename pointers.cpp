#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //RAM: random access memory

    int age = 24;
    int *pAge = &age; //use * to denote a pointer, use the same data type
    double gpa = 3.67;
    double *pGpa = &gpa;
    string name = "Ling";
    string *pName = &name;

    //The variables above are stored at some memory addresses

    cout << "Age: " << &age << endl; //&age is a pointer
    cout << "GPA: " << &gpa << endl;
    cout << "Name: " << &name << endl;

    cout << pAge << endl;
    //dereferencing a pointer
    cout << *pAge << endl;
    cout << *&gpa << endl;


    return 0;

}

