/*  C++ Program to illustrate the use of &nbsp;Pure virtual function  */
#include<iostream>

using namespace std;

class shape{

    public:
    virtual void enter_data() = 0; // pure virtual function
    virtual void area() = 0; // pure virtual function
};

class rectangle : public shape{
    private:
    float length , breadth;
    public:
    void enter_data(){
        cout << "\n Enter the data for the Rectangle........";
        cout << "\n\t Enter the length of the rectangle: " ;
        cin >> length ;
        cout << "\t Enter the breadth of the rectangle: " ;
        cin >> breadth ;
    }
    void area(){
        cout<<"\nThe area of the rectangle is = "<<(length*breadth)<<endl;
    }
};

class circle:public shape{
    private:
    float radius ;
    public:
    void enter_data(){
        cout<<"\nEnter the data for the circle ..........";
        cout<<"\nEnter the radius of the circle : ";
        cin>>radius;
    }
    void area(){
        cout<<"\nThe area of the circle is = "<<(3.14*radius*radius)<<endl;
    }
};

int main()
{
    shape *shp;
    rectangle rec;
    shp = & rec;
    shp->enter_data();
    shp->area();

    circle cir;
    shp = &cir;
    shp->enter_data();
    shp->area();
    return 0;
}