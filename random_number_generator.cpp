#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
    //srand() allows us to seed a random number
    //use time(0) to ensure that the seeding cant be replicated
    srand(time(0));
    for (int x=1; x<25; x++){
        int y = 10;
        cout << 1+(rand()%y) << endl; // change the value of y to generate random numbers from 1 to y
    }

    return 0;
}

