#include <iostream>
#include <cmath>

using namespace std;

/* create a function//*/

double getMax(double num1, double num2, double num3)
{
    double result;
    if(num1 >= num2 && num2 >= num3){
        result = num1;
    } else if (num2 >= num1 && num2 >= num3){
        result = num2;
    } else {
        result = num3;
    }
    return result;
}

int main()
{

    double num1, num2, num3;
    cout << "Enter num1: " << endl;
    cin >> num1;
    cout << "Enter num2:" << endl;
    cin >> num2;
    cout << "Enter num3:" << endl;
    cin >> num3;

    cout << getMax(num1, num2, num3);

    return 0;
}

