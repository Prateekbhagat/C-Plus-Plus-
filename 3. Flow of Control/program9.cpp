#include<bits/stdc++.h>
 
using namespace std ;
 
int main()
{
    int calls;
    cout<<"Enter the total number of calls : ";
    cin>>calls;
    float price;
    if(calls <= 100){
        price = 200;
    }
    else if(calls>100 && calls <= 150 ){
        calls = calls - 100;
        price = 200 + (0.60 * calls);
    }
    else if(calls>150 && calls<=200){
        calls = calls - 150 ;
        price = 200 + (0.60 * 50) + (0.50 * calls);
    }
    else{
        calls = calls - 200;
        price =200 + (0.60 * 50) + (0.50 * 50) + (0.40 * calls);
    }
    cout<<"\nTotal Bill is : Rs."<<price<<" ONLY.";
    return 0;
}