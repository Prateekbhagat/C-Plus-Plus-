#include<iostream>
#include<math.h>

using namespace std ;

int main (){
    float p , r , t, ci ;
    cout<<"\nEnter the principle : ";
    cin>>p;
    cout<<"\nEnter the rate : ";
    cin >> r ;
    cout<<"\nEnter the time : ";
    cin >> t ;

    ci = p*pow((1+r/100),t);
    cout <<"\n\nThe compound interest is : "<<ci ;
    return 0;
}