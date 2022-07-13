/* C++ program to demonstrate an Example of Single Inheritance  */
#include<iostream>

using namespace std;

class B{
    int a;
    public:
    int b;
    void get_ab(){
        cout<<"Enter the value of a : ";
        cin>>a;
        cout<<"Enter the value of b : ";
        cin>>b;
    }
    int get_a(){
        return a ;
    }
    void show(){
        cout<<"\na = "<<a<<"\n";
    }
};

class D : private B{
    int c ;
    public: 
    void mul(){
        get_ab();
        c = b*get_a();
    }
    void display(){
        show();
        cout<<"\nb = "<<b<<endl;
        cout<<"\nc = "<<c<<endl;
    }
};

int main(){
    D d;
    d.mul();
    d.display();
    d.mul();
    d.display();
    return 0;
}