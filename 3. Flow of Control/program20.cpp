#include<bits/stdc++.h>
 
using namespace std ;
 
int main()
{
    int dividend, divisor, rem = 1 , hcf;
    cout<<"\nEnter two numbers : ";
    cin>>dividend>>divisor;

    while(rem!=0){
        rem = dividend % divisor;
        if(rem == 0){
            hcf = divisor;
        }
        else{
            dividend = divisor;
            divisor = rem ;
        }
    }
    cout<<"HCF is : "<<hcf;
    return 0;
}