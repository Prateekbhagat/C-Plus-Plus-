#include<bits/stdc++.h>
 
using namespace std ;
 
int main()
{
    int a , b, temp;
    cout<<"\nEnter the first number : ";
    cin>>a;
    cout<<"\nEnter the Second number : ";
    cin>>b;
    temp = a;
    a = b;
    b = temp;
    cout<<"\nThe value of A is :"<< a;
    cout<<"\nThe value of B is :"<< b;
    return 0;
}