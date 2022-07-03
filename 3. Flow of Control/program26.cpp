#include<bits/stdc++.h>
 
using namespace std ;
 
int main()
{
    int i, n , sign = -1;
    float sum = 0;
    cout << "\nEnter the value of n : ";
    cin>>n;

    for(i = 1; i<=n;i++){
        sign *= -1;
        sum += sign*1.0/i;
    }
    cout<<"log 2 : "<<sum<<endl;
    return 0;
}