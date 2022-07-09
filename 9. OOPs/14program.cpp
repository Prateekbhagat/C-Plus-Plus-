#include<iostream>

using namespace std;

class Rectangle 
{
    private:
        int length;
        int breadth;
    public:
        Rectangle()
        {
            length = 0;
            breadth = 0;
        }
        Rectangle(int l, int b)
        {
            setLength(l);
            setBreadth(b);  
        }
        Rectangle (Rectangle &rect)
        {
            length = rect.length;
            breadth = rect.breadth; 
        }
        void setLength(int l){
            length = l;
        }
        void setBreadth(int b){
            breadth = b;
        }
        int area()
        {
            return length*breadth;
        }  
        int perimeter()
        {
            return 2*(length+breadth);
        }
        int getLength()
        {
            return length;
        }
        int getBreadth()
        {
            return breadth;
        }
        ~Rectangle(){
            cout<< "Rectangle Destroyed"<<endl;
        }
};  
int main()
{
    Rectangle r(10,5);
    Rectangle r2(r);
    cout<<r.getLength()<<endl;
    cout<<r.getBreadth()<<endl;
    cout<<r2.area()<<endl;
    cout<<r2.perimeter()<<endl;
}