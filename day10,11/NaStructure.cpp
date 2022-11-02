#include <iostream>
using namespace std;

struct fruits
{
    string name;
    int weight;
};

int main()
{
    fruits fruit1;
    fruit1.name = " apple ";
    fruit1.weight = 10;

    fruits fruit2;
    fruit2.name = " mango ";
    fruit2.weight = 4;

    cout << fruit1.name << fruit1.weight << " kg " << endl;
    cout << fruit2.name << fruit2.weight << " kg ";

    return 0;
}
