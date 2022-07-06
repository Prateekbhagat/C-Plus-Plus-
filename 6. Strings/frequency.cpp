#include<iostream>
#include<string.h>

using namespace std ;
int main ()
{
    int i{0} , count{0} ;
    char ch[50] , c ;
    cout << "\nEnter the line : ";
    cin >> ch ;
    cout << "\nEnter the character to be found : ";
    cin >> c;
    for (i=0 ; ch[i]!='\0';i++){
        if (ch[i]==c){
            count++;
        }
    }
    if (count == 0){
        cout << "Invalid character input \ncharacter not found"<<endl;
    }
    else {
        cout << "\nCharacter found "<<c<<" this many times : "<<count;
    }
    return 0;
    
}
