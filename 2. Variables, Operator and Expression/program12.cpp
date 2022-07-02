#include<bits/stdc++.h>
 
using namespace std ;
 
int main()
{
    int a, b , c;
    cout<<"\nEnter a : ";
    cin>>a;
    cout<<"\nEnter b : ";
    cin>>b;
    cout<<"\nEnter c : ";
    cin>>c;
    int greatest;
    greatest = (a > b && a > c)? a : (b > c)? b : c;
    cout<<"\nGreatest number is : "<<greatest;
    
    return 0;
}