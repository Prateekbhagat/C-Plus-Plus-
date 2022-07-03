#include<bits/stdc++.h>
 
using namespace std ;
 
int main()
{
    int i , n;
    float sum = 0;
    cout<<"\nEnter the value of n : ";
    cin>>n;

    for(i=1;i<=n;i++){
        sum += 1.0/i;
    cout<<"Sum : "<<sum<<endl;
    }

    cout<<"Sum : "<<sum<<endl;
    return 0;
}