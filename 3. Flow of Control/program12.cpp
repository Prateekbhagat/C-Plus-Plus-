#include <bits/stdc++.h>

using namespace std;

int main()
{
    char ch;
    cout << "\nEnter the character : ";
    cin >> ch;
    if (ch >= 65 && ch <= 90)
    {
        cout << "\nYou Entered a Capital Letter : " << ch;
    }
    else if (ch >= 97 && ch <= 122)
    {
        cout << "\nYou Entered a Lowercase Letter : " << ch;
    }
    else if (ch >= 48 && ch <= 57)
    {
        cout << "\nYou Entered a Digit : " << ch;
    }
    else if (ch <= 127)
    {
        cout << "\nSpecial Symbol : " << ch;
    }
    else
    {
        cout << "\nInvalid Input !";
    }
    return 0;
}