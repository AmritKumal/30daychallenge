#include <iostream>
using namespace std;

class mypc
{
public:
    int computer(int number);
};

int mypc ::computer(int number)
{
    return number;
}

int main()
{
    mypc psobj;
    cout << "computer = " << psobj.computer(1400);

    return 0;
}