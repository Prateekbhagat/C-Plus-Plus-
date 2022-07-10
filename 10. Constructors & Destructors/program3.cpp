#include<iostream>
 
using namespace std ;

class Cadd{
    public: 
    int one;
    Cadd (int two){
        cout<<"\nA constructor is called."<<endl;
        one = two;
    }
    Cadd(){
        cout<<"Default constructor is called."<<endl;
    }
    ~Cadd(){
        cout<<"\nDestructing the constructor. "<<one<<endl;
    }
    int add(){
        return (one + one);
    }

};

int main()
{
    Cadd obj1(4);
    Cadd obj2;

    cout<<"\nThe value of object one is "<<obj1.one;
    cout<<"\nEnter the number : ";
    cin>>obj2.one;
    cout<<obj2.add();
    return 0;
}