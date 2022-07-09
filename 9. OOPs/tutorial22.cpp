//nesting of member function
#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chK_bin(void);
    void ones_compliment(void);
    void display();
};

void binary ::read(void)
{
    cout << "\nEnter the binary number : ";
    cin >> s;
};

void binary ::chK_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Invalid Input" << endl;
            exit(0);
        }
    }
}
void binary ::ones_compliment()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
            /* code */
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display()
{
    cout << "Displaying the binary number : ";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
        /* code */
    }
}
int main()
{
    // oops - classes and objects
    // c++ --> initially cakked --> c with classes by stroustroup
    // class --> extension of structures (in C)
    // structures had limitations
    //          --> members are public
    //          --> no methods
    // classes = structures + more
    // classes --> can have methods and properties
    // classes --> can make few members as private & few as public
    // stuructures in C++ are typedefed
    // you can declare objects with the class declearation

    binary pb;
    pb.read();
    pb.chK_bin();
    pb.ones_compliment();
    pb.display();
    return 0;
}