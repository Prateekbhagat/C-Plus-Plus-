#include<iostream>

using namespace std;

class Rectangle 
{
    public:
        int length;
        int breadth;
    public:
        int area()
        {
            return length*breadth;
        }  
        int perimeter()
        {
            return 2*(length+breadth);
        }
};

int main()
{
    Rectangle r;
    r.length = 5;
    r.breadth = 7;
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
}