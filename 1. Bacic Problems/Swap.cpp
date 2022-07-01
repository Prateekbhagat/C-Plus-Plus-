#include<iostream>
using namespace std ;

int main(){
    int x = 7, y = 9;
    x = x + y ;
    y = x - y ;
    x = x - y ;
    cout << "\nThe value of x is : "<< x ;
    cout << "\nThe value of y is : "<< y ;

    return 0;
}