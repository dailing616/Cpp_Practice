#include <iostream>
#include <cmath>

using namespace std;

/* create a function//*/

double calculator(double num1, double num2, char op)
{
    double result;
    if(op == '+'){
        result = num1 + num2;
    } else if (op == '-'){
        result = num1 - num2;
    } else if (op == '*'){
        result = num1 * num2;
    } else if (op == '/'){
        result = num1 / num2;
    } else {
        cout << "Invalid Operator\n";
    }
    return result;
}

int main()
{

    double num1, num2;
    char op;

    cout << "Enter first number:";
    cin >> num1;
    cout << "Enter second number:";
    cin >> num2;
    cout << "Enter operator:";
    cin >> op;

    cout << calculator(num1, num2, op);

    return 0;
}

