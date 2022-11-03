#include <iostream>
using namespace std;

int main()
{
    string food = "momo";
    string *ptr = &food;

    cout << food << endl;
    cout << &food << endl;

    cout << *ptr << endl;

    *ptr = "chicken momo";
    cout << *ptr << endl;
    cout << &food << endl;

    return 0;
}