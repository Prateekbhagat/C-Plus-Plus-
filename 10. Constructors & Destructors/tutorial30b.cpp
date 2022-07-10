#include <iostream>

using namespace std;

class point
{
private:
    int a, b;

public:
    point(int x, int y)
    {
        a = x;
        b = y;
    }
    void printdata()
    {
        cout << "\nThe point is (" << a << ", " << b << ")" << endl;
    }
};

int main()
{
    point a(7, 9);
    a.printdata();
    return 0;
}