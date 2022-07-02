#include<bits/stdc++.h>
 
using namespace std ;
 
int main()
{
    int a , b;
    cout <<"\nEnter the numbers : ";
    cin>>a>>b;
    if(a>b){
        a = a + b;
        b = a - b;
        a = a - b;
        cout<<"\nThe value of A is : "<<a;
        cout<<"\nThe value of B is : "<<b;
    }
    else if(a<b)
    {
        b = a + b;
        a = b - a;
        b = b - a;
        cout<<"\nThe value of A is : "<<a;
        cout<<"\nThe value of B is : "<<b; 
    }
    else
    {
        cout<<"\nThe number a and b are equal "<<a <<" , "<<b;
    }
    return 0;
}