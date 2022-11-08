#include <iostream>
using namespace std;

int sum(int x)
{
    if (x > 0)
    {
        return x + sum(x - 1);
    }
    else
    {
        return 0;
    }
}

int main()
{
    int sumx = sum(100);
    cout << "sum of num = " << sumx;
    return 0;
}