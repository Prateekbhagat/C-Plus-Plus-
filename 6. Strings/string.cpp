#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    // string line , ch ;
    // cout <<"\n Enter a word : " ;
    // cin>> line;
    // cout <<"\nThe entered string is : "<<line ;
    // cout <<"\nEnter a line of characters : ";
    // while(getline(cin,ch)){
    // cout <<"\nThe line entered was : "<<ch;
    // }
    string s1, s2;
    cout << "\nEnter the first string : ";
    cin >> s1;
    cout << "\nEnter the second string : ";
    cin >> s2;
    if (s1 == s2)
    {
        cout << "\nThe strings are equal" << endl;
    }
    else
    {
        cout << "\nThe strings are not equal" << endl;
        if (s1.size() > s2.size())
        {
            int size;
            size = s1.size();
            cout << "\nThe size of first string " << s1 << "is greater than string 2 " << s2;
            cout << "\nSize of the string is : " << size;
        }
        else
        {
            cout << "\n The second is greater than s1" << endl;
        }
    }
    // if(s1.)

    return 0;
}