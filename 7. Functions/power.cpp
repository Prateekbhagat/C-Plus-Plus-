#include<iostream>
 
using namespace std ;

double pow(double a , double b){
    if(b==0)
    return 1;
    else if (b>0)
    {
        return a*pow(a, b-1);
    }
    else
    return 1/pow(a , -b);
}
 
int main()
{
    double power , x ,y ;
    cout<<"\nEnter the number : ";
    cin>>x;
    cout<<"\nEnter the power : ";
    cin>>y;

    power = pow(x,y);

    cout<<"\nThe Power for the number entered by the user is : "<<power;

    return 0;
}