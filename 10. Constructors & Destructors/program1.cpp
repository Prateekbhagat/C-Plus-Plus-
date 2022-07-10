#include <iostream>

using namespace std;

class cube
{
private:
    double side;

public:
    void setdata(double s)
    {
        side = s;
    }
    double volume()
    {
        return (side * side * side);
    }
    cube()
    {
        cout << "\nDefault Constructor is Called." << endl;
    }
    cube(double side1)
    {
        cout << "\nA constructor is called" << endl;
    }
    ~cube()
    {
        cout << "\nDestructing Contructor" << endl;
    }
};

int main()
{
    cube c1;
    c1.setdata(2);
    cout << "The value of c1 is : " << c1.volume();
    cube c2;
    c2.setdata(2.67);
    cout << "The value of c2 is : " << c2.volume();
    return 0;
}