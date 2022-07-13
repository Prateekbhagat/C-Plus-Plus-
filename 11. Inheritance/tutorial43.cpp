// ! Ambiguity one

#include <iostream>

using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "\nHow are you ? " << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "\nkaise ho ? " << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base2 :: greet();
    }
};

class b{
    int a;
    public : 
    void say(){
        cout <<"\n Hello World"<<endl;
    }
};

class D : public b {
    int a;
    // D new say() method will override base class's say() method 
    public :
    void say(){
        cout <<"\nThe world is beautiful"<<endl;
    } 
};

int main()
{
    // Ambiguity one
    // Base1 base1obj;
    // Base2 base2obj;
    // base1obj.greet();
    // base2obj.greet();
    // Derived d;
    // d.greet();

    // Ambiguity one
    b B;
    D d;
    B.say();
    d.say();
    return 0;
}