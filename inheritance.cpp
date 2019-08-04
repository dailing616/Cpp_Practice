#include <iostream>
#include <cmath>

using namespace std;

//create a superclass
class Chef {
public:
    void makeChicken(){
        cout << "The chef makes chicken." << endl;
    }
    void makeSalad(){
        cout << "The chef makes salad." << endl;
    }
    void makeSpecialDish(){
        cout << "The chef makes Kungpao Chicken." << endl;
    }
};

//inheritance
//create a subclass and inherit from the superclass
class ItalianChef : public Chef{
public:
    void makePasta(){
        cout << "The chef makes pasta." << endl;
    }
    void makeSpecialDish(){
        cout << "The chef makes pizza." << endl;
    }
};

int main()
{
    Chef chef;
    chef.makeChicken();
    chef.makeSpecialDish();

    ItalianChef italianChef;
    italianChef.makeChicken();
    italianChef.makePasta();
    italianChef.makeSpecialDish();
    return 0;
}

