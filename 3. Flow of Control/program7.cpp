#include<bits/stdc++.h>
 
using namespace std ;
 
int main()
{
    int year;
    cout<<"\nEnter the year : ";
    cin>>year;
    if((year%4 == 0)||(year%400 == 0 && year%100 != 0)){
        cout<<"\nThe year is a leap year";
    }
    else {
        cout<<"\nThe year is not a leap year";
    }
    return 0;
}