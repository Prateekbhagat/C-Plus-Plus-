#include <iostream>

using namespace std;

class Base 
{
    public:
        void fun1()
        {
            cout<<"Fun1 of Base"<<endl;
        }
};
class Derived : public Base{
    public:
        void fun2()
        {
            cout<<"Fun2 of Derived"<<endl;
        }
}; 