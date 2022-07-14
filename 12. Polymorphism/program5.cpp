// C++ program to show an example of Pointers to base class 

#include<iostream>

using namespace std;

class polygon {
    protected :
    int width , height;
    public:
    void set_values(int a, int b){
        width = a;
        height = b;
    }

};
class rectangle : public polygon{
    public:
    int area(){
        return width*height;
    }
    void display(){
        cout<<"\nArea of the rectangle = "<<area();
    }
};

class triangle: public polygon{
    public:
    int area(){
        return width * height/2 ;
    }
    void display(){
        cout<<"\nArea of the triangle = "<<area();
    }
};

int main(){
    rectangle rect;
    triangle tri;

    polygon *ppoly1 = &rect ;
    polygon *ppoly2 = &tri;

    ppoly1->set_values(4,5);
    rect.display();
    ppoly2->set_values(4,5);
    tri.display();

}