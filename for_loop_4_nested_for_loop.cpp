#include <iostream>
#include <cmath>

using namespace std;

/* 2D array//*/

int numberGrid[3][2] = {{1,2},{3,4},{5,6}};

int main()
{
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            cout<<numberGrid[i][j]<<endl;
        }
    }

    return 0;
}

