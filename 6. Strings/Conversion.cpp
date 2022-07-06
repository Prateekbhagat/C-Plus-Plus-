#include<bits/stdc++.h>
 
using namespace std ;
 
int main()
{
    // string str1;
    char str1[50], str2[50];
    int i;
    cout <<"\nEnter the string in lowercase : ";
    gets(str1);

    strcpy(str2,str1);
    for (int i = 0; i <= strlen(str1); i++)
    {
        if(str1[i]>=97 && str1[i]<=122){
            str1[i] = str1[i]-32;
        }
    }
    cout<<"\nThe string [ "<<str2<<" ] in Uppercase = [ "<<str1<<" ] ";
    // cout<<"\nThe string [ "<<str2<<" ] in Uppercase = [ "<<str1<<" ] "<<;
    return 0;
}