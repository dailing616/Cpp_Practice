#include <iostream>
#include <cmath>

using namespace std;

/* create a function//*/

string login(string userid, string password)
{
    if(userid == "LingDai" && password=="estudygaming"){
        return "Successfully logged in!";
    } else if(userid == "LingDai" && !(password=="estudygaming")){
        return "Wrong password!";
    } else if(!(userid == "LingDai") && password=="estudygaming"){
        return "Wrong ID!";
    } else {
        return "Wrong ID and password!";
    }
}

int main()
{

    string userid, password;
    cout << "Enter ID: " << endl;
    getline(cin, userid);
    cout << "Enter password:" << endl;
    getline(cin, password);


    cout << login(userid, password);

    return 0;
}

