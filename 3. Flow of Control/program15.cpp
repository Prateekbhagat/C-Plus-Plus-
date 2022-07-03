#include<bits/stdc++.h>
 
using namespace std ;
 
int main()
{
    int n;
    cout<<"\nEnter the number : ";
    cin>>n;
    int factorial = 1;
    while(n>=1){
       factorial *= n;
       n--; 
    }
    cout<<"Factorial of the number is : "<<factorial;
    return 0;
}