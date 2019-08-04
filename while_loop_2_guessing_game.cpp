#include <iostream>
#include <cmath>

using namespace std;

/* switch statement//*/


int main()
{
    int secretNum = 16;
    int guessLimit = 10;
    int guessCount = 0;
    int guess;

    do{
        cout << "Enter a guess (1~20): " << endl;
        cin >> guess;
        guessCount += 1;
    } while(guess!=secretNum && guessCount < guessLimit);

    if (guessCount < guessLimit){
            cout << "You Win!";
    } else {cout << "You Lose!";}

    return 0;
}

