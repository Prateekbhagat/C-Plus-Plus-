// Program to find the greatest Number
#include <iostream>

using namespace std;

class largest
{
private:
    int x, y, z;

public:
    void input(void);
    void calc(void);
};

void largest ::input(void)
{
    cout << "\nEnter the first number  : ";
    cin >> x;
    cout << "\nEnter the second number  : ";
    cin >> y;
    cout << "\nEnter the third number  : ";
    cin >> z;
}
void largest ::calc()
{
    int a;
    a = ((x > y) && (x > z) ? x : (y > x) && (y > z) ? y : z);
    cout << "\nThe largest number amoung " << x << " " << y << " " << z << " is : " << a;
}

int main()
{
    largest number;
    number.input();
    number.calc();
    return 0;
}