#include <iostream>

using namespace std;

class y;

class x
{
    int data;

public:
    void setData(int value)
    {
        data = value;
    }
    friend void add(x, y);
};

class y
{
    int num;

public:
    void setData(int value)
    {
        num = value;
    }
    friend void add(x, y);
};

void add(x o1, y o2)
{
    cout << "The sum of the value's is : " << o1.data + o2.num << endl;
};

int main()
{
    x a1;
    a1.setData(5);

    y b1;
    b1.setData(10);

    add(a1, b1);

    return 0;
}