//  C++ Program to illustrate Abstract base class
#include <iostream>

using namespace std;

class polygon
{
protected:
    int width, height;

public:
    void set_values(int a, int b)
    {
        width = a;
        height = b;
    }
    virtual int area(void) = 0;
};
class rectangle : public polygon
{
public:
    int area()
    {
        return width * height;
    }
    void display()
    {
        cout << "\nArea of the rectangle = " << area();
    }
};

class triangle : public polygon
{
public:
    int area()
    {
        return width * height / 2;
    }
    void display()
    {
        cout << "\nArea of the triangle = " << area();
    }
};

int main()
{
    rectangle rect;
    triangle tri;

    polygon *ppoly1;
    polygon *ppoly2;

    ppoly1 = &rect;
    ppoly2 = &tri;

    ppoly1->set_values(4, 5);
    ppoly2->set_values(4, 5);

    cout << "\nAn example to illustrate abstract class"<<endl;
    cout << ppoly1->area() << endl;
    cout << ppoly2->area() << endl;
}
