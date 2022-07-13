//! C++ Program to Access Protected Data Member using Inheritance

#include <iostream>

using namespace std;

class A
{
private:
    int a;

protected:
    int p;

public:
    void set_data(int x)
    {
        a = x;
    }
    void print_data()
    {
        cout << "The value of a is " << a << endl;
    }
};
class B : public A
{
private:
    int b;

public:
    void set_b(int y)
    {
        b = y;
    }
    void print_b()
    {
        cout << "The value of b is " << b << endl;
    }
    void ste_p(int z)
    {
        p = z;
    }
    void print_p()
    {
        cout << "The value of p is " << p << endl;
    }
};
int main()
{
    B obj;
    obj.set_data(12);
    obj.print_data();
    obj.set_b(13);
    obj.print_b();
    obj.ste_p(1905012);
    obj.print_p();
}