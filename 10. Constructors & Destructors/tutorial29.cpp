#include <iostream>

using namespace std;
class complex
{
    int a, b;

public:
    // Creating a constructor
    // Constructor is a special member function with the same name as of the class .
    // It is used to initialize the objects of its class
    // It is automatically invoked whenever an object is created

    complex(void); // Constructor Decleration and the class name and constructor name must be same.
    void printdata()
    {
        cout << "\nYour number is " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(void)
{ // This is a default constructor as it doesnot accepts any parameter .
    a = 10;
    b = 20;
}

int main()
{
    complex c;
    complex z;
    c.printdata();
    z.printdata();
    return 0;
}

// Characterstics of Contructors

// 1. It should be declared in the public section of the class
// 2. They are automatically invoked whenever the object is created
// 3. They cannot return values and do not have return types
// 4. It can have default arguments
// 5. We cannot refer to their address