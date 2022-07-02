#include<bits/stdc++.h>
 
using namespace std ;
 
int main()
{
    int days, y ,m,d;
    cout<<"Enter the Number of days : ";
    cin>>days;
    y = days / 365;
    days = days % 365;
    m = days/30;
    d = days % 30;
    cout <<"Years : "<<y<<"\nMonths : "<<m<<"\nDays : "<<d;
    return 0;
}