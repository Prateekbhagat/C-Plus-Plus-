#include<iostream>
 
using namespace std ;

void printnaturalnum(int lowerlimit ,int upperlimit){
    if (lowerlimit > upperlimit)
    return ;
    cout<<lowerlimit <<" " ;

    printnaturalnum(lowerlimit + 1 ,upperlimit);
}

 
int main()
{
    int lowerlimit, upperlimit ;
    cout <<" \nEnter the lower limit : ";
    cin>>lowerlimit;
    cout <<" \nEnter the upper limit : ";
    cin>>upperlimit;

    cout <<"the natural numbers between "<<lowerlimit<<" and "<<upperlimit<<" are : ";
    printnaturalnum(lowerlimit , upperlimit);

    return 0;
}