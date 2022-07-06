#include<iostream>
#include<string.h>

using namespace std ;
 
int main()
{
    char a[50], b[50] ;
    cout << "\nEnter the first string : ";
    gets(a);
    // puts(a); Used for printing the text
    cout <<"\nEnter the second string : ";
    gets(b);

    cout <<"\nAfter Concatenating : "<<strcat(a,b) ;
    // cout <<"\nAfter Concatenating : "<< ;

    return 0;
}