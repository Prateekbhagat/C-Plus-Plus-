
// Constructor Overloading

#include <iostream>

using namespace std;

class complex
{
    int a, b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }

    complex(int x)
    {
        a = x;
        b = 90;
    }
    complex(void)
    {
        a = 893;
        b = 90;
    }
    void printdata()
    {
        cout << "\nThe point is (" << a << ", " << b << ")" << endl;
    }
};

int main()
{
    complex xyz(6 , 8);
    xyz.printdata();

    complex tyu = complex(7);
    tyu.printdata();

    complex c3;
    c3.printdata();
    return 0;
}