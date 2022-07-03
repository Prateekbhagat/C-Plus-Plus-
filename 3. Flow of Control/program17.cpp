#include<bits/stdc++.h>
 
using namespace std ;
 
int main()
{
    int n , t, r, rev = 0;
    cout<<"\nEnter any number : ";
    cin>>n;
    t = n;
    while (t>0)
    {
        r = t % 10;
        t = t/10;
        rev = rev*10+r;
    }
    cout<<"\nAfter reversing the number : "<<rev;
    
    return 0;
}