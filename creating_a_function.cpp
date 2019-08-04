#include <iostream>
#include <cmath>

using namespace std;

/* create a function//*/
/* placeholder if necessary//*/
void sayHi(string name, int age);

int main()
{
    sayHi("Papadox", 24);
    sayHi("Niu Niu", 23);
    return 0;
}

void sayHi(string name, int age)
{
    cout << "Hello " << name << endl;
    cout << "You are " << age << endl;
}
