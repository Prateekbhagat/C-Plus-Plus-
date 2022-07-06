#include<iostream>
#include<string.h> 

using namespace std ;
 
int main()
{
    char line[150];
    int c{},f{},g{},s{};    
    cout <<"\nEnter the string : ";
    gets(line);
    cout << "\nThe string is : "<<puts(line) ;
    for (int i = 0 ; line[i]!='\0'; i++){
        if(line[i] == 'a' || line[i] == 'e' || line[i]  == 'o'||line[i]  == 'u'||line[i] == 'i' || line[i] == 'A'||line[i] == 'E'||line[i] == 'I'||line[i] == 'O'||line[i] == 'U' )
        c++;
        else if ((line[i]>='A'&& line[i]<='Z')||(line[i]>='a' && line[i]<='z'))
        f++;   
        else if(line[i]>='0'&& line[i]<= '9')
        g++;     
        else if(line[i]==' ')
        s++;
    }
    cout << "\nNo. of vowels = "<<c;
    cout <<"\nNo. of constants = "<<f;
    cout << "\nNo. of digits = "<<g;
    cout << "\nNo. of spaces = "<<s;
    return 0;
}