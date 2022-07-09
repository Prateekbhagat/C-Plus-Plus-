#include <iostream>

using namespace std;

class b;

class a
{
    int value1;

public:
    void setdata(int num)
    {
        value1 = num;
    };
    void display(void)
    {
        cout << "\nThe value is now for value1 is " << value1 << endl;
    }
    friend void swap(a &, b &);
};

class b
{
    int value2;

public:
    void setdata(int number)
    {
        value2 = number;
    };
    void display(void)
    {
        cout << "\nThe value is now for value2 is " << value2 << endl;
    }
    friend void swap(a &, b &);
};

void swap(a &o1, b &o2)
{
    int temp;
    temp = o1.value1;
    o1.value1 = o2.value2;
    o2.value2 = temp;
};

int main()
{
    a a1;
    b b1;

    a1.setdata(12);
    a1.display();

    b1.setdata(13);
    b1.display();

    swap(a1, b1);
    a1.display();
    b1.display();

    return 0;
}