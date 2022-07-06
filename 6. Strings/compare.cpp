#include<iostream>
#include<string.h>

using namespace std ;

int main()
{
    char str1[50] ,str2[50] ,i{0},j{0} ,flag{0};
    cout <<"\nEnter the first string : ";
    cin>>str1 ;
    cout <<"\nEnter the second string : ";
    cin>>str2 ;
    for (i=0,j=0;str1[i]!='\0',str2[j]!='\0';i++,j++){
        // for(j=0;str2[j]!='\0';j++){
                if(str1[i]==str2[j])
                cout << "\nthe strings are equal";
                else
                cout <<"the strings are not equal\n";
            }
    int a;
    a = strcmp(str1,str2);
    if (a = 0)
    cout<<"The strings are equal"<<endl;
    else
    cout<<"Strings are not equal"<<endl;

}