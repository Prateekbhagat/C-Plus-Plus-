#include <iostream>

using namespace std;
class complex
{
    int a, b;

public:
    complex(int , int); 
    void printdata()
    {
        cout << "\nYour number is " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(int x , int y) // This is a parameterized constructor as it takes parameters 
{ 
    a = x;
    b = y;
}

int main()
{
    // complex c;
    // c.printdata();
    // Implicit call 
    complex a(4, 6);
    a.printdata();

    // Explicit Call
    complex b = complex(8 ,9) ;
    b.printdata();
    return 0;
}