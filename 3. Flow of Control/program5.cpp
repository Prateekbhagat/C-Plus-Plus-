#include<bits/stdc++.h>
 
using namespace std ;
 
int main()
{
    int Ram, Sulab , Ajay ;
    cout<<"Enter the ages : ";
    cin>>Ram>>Sulab>>Ajay;
    int youngest;
    youngest = (Ram < Sulab && Ram < Ajay)?Ram:(Sulab < Ajay) ? Sulab : Ajay; 
    cout<<"The youngest of all is : "<<youngest;
    if(youngest == Ajay){
        cout<<"\nAjay is Youngest";
    }
    else if(youngest == Ram){
        cout<<"\nRam is Youngest";
    }
    else{
        cout<<"\nSulab is Youngest";
    }
    return 0;
}