#include<iostream>
 
using namespace std ;
int count = 0;
 // Destructor never takes an argument nor does it return any value
class num{
    public : 
    num(){
        count++ ;
        cout<<"\nThis is the time when constructor is called for object number "<<count<<endl;
    }
    ~num(){
        cout <<"\nThis is the time when my destructor is called for object number "<<count<<endl;
        count--;
    }
} ;
int main()
{
    cout <<"\nWe are inside our main Function "<<endl;
    cout <<"\nCreating first object n1"<<endl;
    num n1;
    {
        cout <<"\nEntering this block"<<endl;
        cout <<"\nCreating two more objects"<<endl;
        num n2 , n3 ;
        cout<<"\nExiting this block"<<endl;
    }
    cout <<"\nBack to main Func."<<endl;
    // num n2;
    return 0;
}