#include <iostream>

using namespace std;

class Number
{
    int a;

public:
    Number(){
        a = 0;
    };
    Number(int num)
    {
        a = num;
    }
    // When no copy constructor is found , compiler supplies its own copy constructor 
    Number(Number &object)
    {
        cout <<"\nCopy Constructor called !!!!"<<endl;
        a = object.a;
    }
    void display()
    {
        cout << "\nThe number for this object is " << a << endl;
    }
};

int main()
{
    Number x, y, z(46);
    x.display();
    y.display();
    z.display();
    //  z1 should resemble z or y or x 
    Number z1(x); // Copy constructor invoked
    z1.display();

    Number z2;
    z2 = z ; // Copy constructor not called
    z2.display();

    Number z3 = z; // Copy constructor invoked
    z3.display();
    return 0;
}