#include <iostream>
#include <cmath>

using namespace std;

//Recursion

int factorialFinder(int x){
    //the base case
    if(x==1){
        return 1;
    } else {
        return x*factorialFinder(x-1);
    }
}

int main()
{
    cout << factorialFinder(5);
    return 0;
}
