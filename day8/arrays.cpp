#include <iostream>
using namespace std;

int main()
{
    string cars[4] = {"hyundai", "tata", "tesla", "toyota"};
    for (int i = 0; i < 4; i++)
    {
        cout << i << " cars = " << cars[i] << endl;
    }

    return 0;
}