#include <iostream>
using namespace std;

void myarray(int numbers[5])
{
    for (int i = 0; i < 5; i++)

    {
        cout << "my numbers = " << numbers[i] << endl;
    }
}

int main()
{
    int numbers[5] = {23, 45, 77, 32, 3};
    myarray(numbers);
    return 0;
}
