#include <iostream>
using namespace std;

int areafx(int a)
{
    return a * a;
}

int areafx(float l, float b)
{
    return l * b;
}

int main()
{
    int a;
    float l, b;
    cout << "enter side a ";
    cin >> a;
    cout << "area of square = " << areafx(a) << endl;

    cout << "enter length and breadth ";
    cin >> l >> b;
    cout << "area of rectangle = " << areafx(l, b) << endl;

    return 0;
}
