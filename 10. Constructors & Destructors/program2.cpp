#include <iostream>

using namespace std;

class rectangle
{
private:
    int length, breadth;

public:
    rectangle(int, int);
    // rectangle();
    int calc()
    {
        return length * breadth;
    }
    int length1()
    {
        return length;
    }
    int breadth1()
    {
        return breadth;
    }
};
rectangle ::rectangle(int x, int y)
{
    length = x;
    breadth = y;
}

int main()
{
    rectangle a(3,4);
    cout << "\nThe length of rectangle a is " << a.length1();
    cout << "\nThe length of rectangle a is " << a.breadth1();
    cout << "\nThe area of the rectangle is " << a.calc();
    rectangle b(2, 3);
    cout << "\nThe length of rectangle b is " << b.length1();
    cout << "\nThe Breadth of rectangle b is " << b.breadth1();
    cout << "\nThe area of the rectangle is " << b.calc();
    return 0;
}