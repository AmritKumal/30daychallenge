#include <iostream>
using namespace std;

int main()
{
    int numbers[3] = {12, 34, 45};

    for (int i : numbers)
    {
        cout << i << "\t";
    }
    return 0;
}
