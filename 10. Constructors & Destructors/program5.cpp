#include<iostream>
 
using namespace std ;

class date{
    private: 
    int dd, mm , yy;
    public: 
    date(int d ,int  m ,int  y){
        dd = d;
        mm = m;
        yy = y;
    }
    date(){
        cout<<"\nDefault contructor called";
    }
    void display(){
        cout<<"\nThe entered date is : "<<dd<<" / "<<mm<<" / "<<yy;
    }
    ~date(){
        cout<<"\nDestructing Date";
    }
};

int main()
{
    date a;
    date b(01,11,2000);
    b.display();
    // a.display(); // This is going to give you the garbage value.
    return 0;
}