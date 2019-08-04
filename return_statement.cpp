#include <iostream>
#include <cmath>

using namespace std;

/* create a function//*/

double cube(double num)
{
    return pow(num,3);
}

int main()
{

    double answer = cube (3.0);
    cout << answer << endl;

    cout << cube(2.0) << endl;
    return 0;
}

