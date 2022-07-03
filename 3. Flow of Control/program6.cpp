#include<bits/stdc++.h>
 
using namespace std ;
 
int main()
{
    int a , b , c;
    cout<<"\nEnter the sides of triangle : ";
    cin>>a>>b>>c;
    int sum ;
    sum = a + b + c;
    if(sum == 180){
        cout<<"\nThe triangle is possible";
    }
    else{
    cout<<"\nThe triangle is not possible";
    }
    return 0;
}