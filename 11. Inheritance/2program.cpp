#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int length = 0, int breadth = 0)
    {
        this->length = setlength(length);
        this->breadth = setBreadth(breadth);
    }
    int getLength();
    int getBreadth();
    int setlength(int l);
    int setBreadth(int b);
    int area();
    int perimeter();
};
int Rectangle::getLength()
{
    return length;
    // cout << length << endl;
}
int Rectangle::getBreadth()
{
    return breadth;
    // cout << breadth << endl;
}
int Rectangle::setlength(int l)
{
    length = l;
}
int Rectangle::setBreadth(int b)
{
    breadth = b;
}
int Rectangle::area()
{
    cout << length * breadth << endl;
}
int Rectangle ::perimeter()
{
    cout << 2 * length * breadth << endl;
}

class Cuboid : public Rectangle
{
private:
    int height;

public:
    Cuboid(int length = 0, int breadth = 0, int height = 0)
    {
        this->height = height;
        setlength(length);
        setBreadth(breadth);
    }
    int getheight();
    void setHeight(int h);
    int volume()
    {
        return getLength() * getBreadth() * height;
    }
};

int main()
{
    Cuboid c(10,5,3);
    cout<<c.getLength()<<endl;
    cout<<c.volume()<<endl;
    cout<<c.area()<<endl;
}