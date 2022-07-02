#include<bits/stdc++.h>
 
using namespace std ;
 
int main()
{
    int foot, inches;
    float centimeters;
    cout<<"\nEnter the foot : ";
    cin>>foot;
    cout<<"\nEnter the inches : ";
    cin>>inches;
    centimeters = (foot*30.48) +  (inches * 2.54) ;
    cout<<"\nTotal Centimeters is : "<<centimeters;
    return 0;
}