#include<bits/stdc++.h>
 
using namespace std ;
 
int main()
{
    int sp , cp ,result;
    cout<<"\nEnter the cost Price : ";
    cin>>cp;
    cout<<"\nEnter the Selling Price : ";
    cin>>sp;
    result = sp - cp;
    if(result>0){
        cout<<"\nProfit of Rs. "<<result;
    }
    else if(result<0){
        cout<<"\nLoss of Rs. "<<-(result);
    }
    else{
        cout<<"\nNo LOSS and No PROFIT";
    }
    return 0;
}