#include <iostream>
#include <math.h>

int number(int num, int power);
using namespace std;

int main()
{
    int num, power;
    cout << "\nEnter the number : ";
    cin >> num;
    cout << "\nEnter the power : ";
    cin >> power;
    cout << "\nThe result of the given inputs is : " << number(num, power);
    return 0;
}
int number(int num, int power)
{
    if (power == 0)
    {
        return 1;
    }
    else if (power > 0)
    {
        return num * pow(num, power - 1);
    }
    else
    {
        return 1 / pow(num, -power);
    }
}
