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
    int age;
    int ageTotal = 0;
    int numberOfPeople = 0;

    cout << "Enter first person's age or -1 to quit" << endl;
    cin >>age;

    while (age!=-1){
        ageTotal += age;
        numberOfPeople++;

        cout << "Enter next person's age or -1 to quit" << endl;
        cin>>age;
    }

    cout << "Number of people entered: " << numberOfPeople << endl;
    cout << "Average age: "<< ageTotal/numberOfPeople;
    return 0;
}
