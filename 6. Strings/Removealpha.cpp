#include<iostream>
#include<string.h>

using namespace std ;
 
int main()
{
    string line ;
    int i ,len ;
    cout << "\nEnter the string : ";
    cin >> line ;
    cout << "\nThe original string is : "<< line;
    len = line.size();
    cout << "\nTHe string len is : "<< len ;
    for (i = 0 ; i <len ; i++){
        if (!((line[i]>='a' && line[i]<='z')||(line[i]>='A'&&line[i]<='Z'))){
            line[i] = '\0';
        }
    }
    cout << "\nAfter removing characters : "<<line;

    return 0;
}