#include <iostream>
using namespace std;

void swapfunci(int &x, int &y)
{
    int z = x;
    y = x;
    x = z;
}

int main()
{
    int a = 45;
    int b = 95;

    cout << " before swap " << a << b << endl;

    swap(a, b);

    cout << "after swap " << a << b << endl;

    return 0;
}