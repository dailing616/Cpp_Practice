#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    cout << 3 + 4 * 5 << endl;

    /* remainder;//*/
    cout << 10 % 3 << endl;

    int wnum = 5;
    double dnum = 5.5;

    /* increment (+1);//*/
    cout << wnum << endl;
    wnum ++;
    cout << wnum << endl;
    wnum --;
    cout << wnum << endl;
    wnum += 5;
    cout << wnum << endl;
    wnum /= 2;
    cout << wnum << endl;

    /* if we do math with two integers, the result will always be an integer;//*/
    cout << 10 / 3 << endl;
    cout << 10.0 / 3.0 << endl;

    /* cmath functions//*/

    /* pow(base, power)//*/
    cout << pow(2,5) << endl;

    /* sqrt(number)//*/
    cout << sqrt(16) << endl;

    /* rounding//*/
    cout << round(5.3) << endl;
    cout << ceil(5.3) << endl;
    cout << floor(5.3) << endl;

    /* comparison//*/
    cout << fmax(3,10) << endl;
    cout << fmin(3,10) << endl;


    return 0;
}
