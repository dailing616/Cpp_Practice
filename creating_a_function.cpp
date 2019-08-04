#include <iostream>
#include <cmath>

using namespace std;

/* create a function//*/
void sayHi(string name, int age)
{
    cout << "Hello " << name << endl;
    cout << "You are " << age << endl;
}

int main()
{
    sayHi("Papadox", 24);
    sayHi("Niu Niu", 23);
    return 0;
}
