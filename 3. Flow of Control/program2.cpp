#include<bits/stdc++.h>
 
using namespace std ;
 
int main()
{
    int a;
    cout<<"\nEnter the number : ";
    cin>>a;
    if(a>=0){
        cout<<"\nThe number entered by the user is : "<<a; 
    }
    else{
        cout<<"\nThe number entered by the user is : "<< -(a);
    }
    return 0;
}