#include<iostream>
#include<math.h>

using namespace std ;
int main ()
{
    float x ,n;
    float result ;

    cout<< "\nEnter number x : ";
    cin >> x ;
    cout << "\nEnter the power : ";
    cin >> n ;
    result = pow(x,n);

    cout << "\nThe power of number is : "<<result;
    return 0 ;


}