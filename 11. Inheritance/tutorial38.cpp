// Single inheritance Deep Drive
//  single inheritance using public visibility mode 

#include <iostream>

using namespace std;

class base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void base ::setdata(void)
{
    data1 = 10;
    data2 = 20;
};
int base ::getdata1(void)
{
    return data1;
};
int base ::getdata2(void)
{
    return data2;
};

class derived : public base
{
    int data3;

public:
    void process();
    void display();
};
void derived ::process()
{
    data3 = data2 * getdata1();
};
void derived ::display()
{
    cout << "\nValue of data 1 is : " << getdata1() << endl;
    cout << "\nValue of data 2 is : " << data2 << endl;
    cout << "\nValue of data 3 is : " << data3 << endl;
}

int main()
{
    derived data;
    data.setdata();
    data.process();
    data.display();
    return 0;
}