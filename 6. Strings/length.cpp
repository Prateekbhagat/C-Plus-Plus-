#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char ch[50] ;
    int count{0} ;
    cout <<"\nEnter the string : ";
    cin >> ch ;
    for (int i = 0 ; ch[i]!='\0' ;i++){
        count++;
    }
    cout <<"\nThe length of the string is : "<<count;
    return 0 ;

}