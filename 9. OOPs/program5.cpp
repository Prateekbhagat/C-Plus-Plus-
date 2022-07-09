#include<bits/stdc++.h>
 
using namespace std ;

class square
{
    private :
    int n,r;
    float n1, r1;
    static int b ;
    public:
    void getdata();
    int calc();
    void display(void);
};

int square :: b=0;

void square :: getdata(){
    cout<<"\nEnter the number : ";
    cin>>n;
    cout<<"\nEnter the float : ";
    cin>>n1;
    b++;
}

int square:: calc(){
    r = n*n;
    r1 = n1*n1;
    b++;
    return r,r1;
}

void square :: display(void){
    cout<<"\nThe square of integer is : "<<r;
    cout<<"\nThe square of the floating number is : "<<r1;
    cout<<"\nFunction is called "<<b<<" these many times";
}

int main()
{
    square prateek;
    prateek.getdata();
    prateek.calc();
    prateek.display();
    return 0;
}