#include<bits/stdc++.h>
 
using namespace std ;
 
int main()
{
    int n;
    cout<<"\nEnter the last number you want to print : ";
    cin>>n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout<<"total sum = "<<sum;
    return 0;
}