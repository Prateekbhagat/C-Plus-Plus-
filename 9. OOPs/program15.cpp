#include<iostream>
 
using namespace std ;

class swapping{
    int a , b;
    public:
    void getdata(int x , int y){
        a = x;
        b = y;
    }
    void display(){
        cout<<"\nA = "<<a<<"\nB = "<<b;
    }
    void swap(){
        a = a + b;
        b = a - b;
        a = a - b;
    }
};

int main()
{
    int x , y;
    cout<<"\nEnter the number : ";
    cin>>x;
    cout<<"\nEnter the number : ";
    cin>>y;
    swapping number;
    number.getdata(x , y);
    cout<<"\nBefore Swapping";
    number.display();
    cout<<"\nAfter swapping";
    number.swap();
    number.display();
    return 0;
}