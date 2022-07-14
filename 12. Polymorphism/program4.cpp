/*  C++ Program to illustrates the use of Virtual base class  */

#include <iostream>
using namespace std;

class B
{
protected:
    int base_data;

public:
    void get_base_data(int b)
    {
        cout << "\nAccessing the data from the base class B---------->";
        base_data = b;
    }
    void display_base_data(void)
    {
        cout << "\nBase Data = " << base_data << endl;
    }
};

class D1 : virtual public B
{
protected:
    int der1_data;

public:
    void get_d1_data(int d1)
    {
        cout << "\nAccessing the data from the Derived class D1---------->";
        der1_data = d1;
    }
    void display_d1_data(void)
    {
        cout << "\nDervied class 1 data = " << der1_data << endl;
    }
};

class D2 : virtual public B
{
protected:
    int der2_data;

public:
    void get_d2_data(int d2)
    {
        cout << "\nAccessing the data from the Derived class D2---------->";
        der2_data = d2;
    }
    void display_d2_data()
    {
        cout << "\nDerived class 2 data = " << der2_data << endl;
    }
};
class D3 : public D1, public D2
{
public:
    int der3_data;
    void get_d3_data(int d3)
    {
        cout << "\nAccessing the data from the Derived class D2---------->";
        der3_data = d3;
    }
    void display_d3_data()
    {
        cout << "\nDerived class 2 data = " << der3_data << endl;
    }
};

int main(){
    D3 der3;
    der3.get_base_data(7);
    der3.display_base_data();

    der3.get_d1_data(8);
    der3.display_d1_data();

    der3.get_d2_data(56);
    der3.display_d2_data();

    der3.get_d3_data(134);
    der3.display_d3_data();

    return 0;
}