#include <iostream>
#include <cmath>

using namespace std;

/* switch statement//*/

string getDayOfWeek(int dayNum){
    string dayName;

    switch(dayNum){
    case 0:
        dayName = "Sunday";
        break;
    case 1:
        dayName = "Monday";
        break;
    case 2:
        dayName = "Tuesday";
        break;
    case 3:
        dayName = "Wednesday";
        break;
    case 4:
        dayName = "Thursday";
        break;
    case 5:
        dayName = "Friday";
        break;
    case 6:
        dayName = "Saturday";
        break;
    default:
        dayName = "Invalid Day Number";
        break;
    }

    return dayName;
}

int main()
{
    cout << getDayOfWeek(1) << endl;
    cout << getDayOfWeek(5) << endl;
    cout << getDayOfWeek(9) << endl;
    return 0;
}

