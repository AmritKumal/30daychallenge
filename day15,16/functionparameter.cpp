#include <iostream>
using namespace std;

void myfx(int values = 8449, string animals = "lio", char fruit = 'n')
{
    cout << "num =" << values << animals << fruit << endl;
}

int main()
{
    myfx(12, "rhino");
    myfx(35, "tiger");
    myfx(480, "elephant");
    myfx();

    return 0;
}
