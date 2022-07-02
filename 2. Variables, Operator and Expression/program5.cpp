#include<bits/stdc++.h>
 
using namespace std ;
 
int main()
{
    float rate, principle , time;
    cout<<"\nEnter the Principle amount : ";
    cin>>principle;
    cout<<"\nEnter the rate : ";
    cin>>rate;
    cout<<"\nEnter the time : ";
    cin>>time;
    float simpleInterest;
    simpleInterest =( principle * rate * time )/100;
    cout <<"\nThe interest for the amount of "<<principle<<" is : "<<simpleInterest;
    return 0;
}