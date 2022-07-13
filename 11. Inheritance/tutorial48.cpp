#include <iostream>

using namespace std;
/*
Case 1 :
class B ; public A{
    Order of execution of constructor --> first A() then B()
};

Case 2 :
class A : public B, public C{
    order of execution of constructor --> B() then C() and then A()
};

Case 3 :
class A : public B , virtual public C{
    order of execution of constructor --> C() then B() and then A()
};

*/
class base1
{
    int data;

public:
    base1(int i)
    {
        data = i;
        cout << "\nBase class constructor called" << endl;
    }

    void printdatabase1(void)
    {
        cout << "\nthe value of data is " << data << endl;
    }
};
class base2
{
    int data2;

public:
    base2(int i)
    {
        data2 = i;
        cout << "\nBase2 class constructor called" << endl;
    }

    void printdatabase2(void)
    {
        cout << "\nthe value of data is " << data2 << endl;
    }
};

class derived : public base1, public base2
{
    int derived1, derived2;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "\nDerived class constructor called" << endl;
    }
    void printdata(void)
    {
        cout << "\nThe value of the derived 1 is : " << derived1 << endl;
        cout << "\nThe value of the derived 2 is : " << derived2 << endl;
    }
};
int main()
{
    derived harry(1, 2, 34, 4);
    harry.printdata();
    cout<<"HeLLO"<<endl;
    harry.printdatabase1();
    cout<<"World"<<endl;
    harry.printdatabase2();
    return 0;
}