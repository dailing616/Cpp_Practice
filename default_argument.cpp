#include <iostream>
#include <cmath>

using namespace std;

//default argument
int volume(int l=1, int w=1, int h=1);

int main()
{
    cout << volume();
    return 0;
}

int volume(int l, int w, int h){
    return l*w*h;
}

