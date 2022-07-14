#include<iostream>

using namespace std;

class Base
{
    public: 
    virtual void displaY()
    {
        cout<<"Display of Base"<<endl;
    }
};

class Derived: public Base
{
    public: 
    void displaY()
    {
        cout<<"Display of Derived"<<endl;
    }
};
int main()
{
    // Base d;
    // d.displaY();
    Derived d;
    Base *ptr = &d;
    ptr->displaY();
}  