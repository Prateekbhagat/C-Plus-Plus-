#include<iostream>
 
using namespace std ;

class greatest{
    int x,y,z;
    public:
    void input(){
        cout<<"\nEnter the number : ";
        cin>>x;
        cout<<"\nEnter the number : ";
        cin>>y;
        cout<<"\nEnter the number : ";
        cin>>z;
    }

    void calc(){
        int g;
        g = ((x>y) && (x>z) ? x : (y>z) ? y : z);
        cout<<"\nThe greatest Number is : "<<g;
    }
};

int main()
{
    greatest num;
    num.input();
    num.calc();
    return 0;
}