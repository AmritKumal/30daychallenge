#include <iostream>
using namespace std;
class car
{
public:
    string name;
    string colour;
    int model;
};

int main()
{
    car objcar1;
    objcar1.name = " volvo ";
    objcar1.colour = "white ";
    objcar1.model = 45;

    car objcar2;
    objcar2.name = " toyota ";
    objcar2.colour = "  red ";
    objcar2.model = 23;

    cout << objcar1.name << objcar1.colour << objcar1.model << endl;
    cout << objcar2.name << objcar2.colour << objcar2.model << endl;

    return 0;
}
