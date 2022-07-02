#include<bits/stdc++.h>
 
using namespace std ;
 
int main()
{
    float fahrenheit, centigrade ;
    cout<<"\nEnter the temperature in Fahrenheit : ";
    cin>>fahrenheit;
    centigrade = (32 * fahrenheit - 32) *(5/9);
    cout <<"\nThe temperature is : "<<centigrade;
    return 0;
}