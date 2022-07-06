#include <bits/stdc++.h>

using namespace std;

int main()
{
    char str1[20], str2[20], str3[20];
    cout << "\nEnter the first string : ";
    gets(str1);
    cout << "\nEnter the Second string : ";
    gets(str2);

    cout << "\nStrings before swapping are : ";
    cout << "\n\t String 1 = " << str1;
    cout << "\n\t String 2 = " << str2;

    int i = 0, j = 0, k = 0;
    while (str1[i] != '\0')
    {
        str3[j] = str1[i];
        i++;
        j++;
    }

    str3[j] = '\0';
    i = 0, j = 0;
    while (str2[i] != '\0')
    {
        str1[j] = str2[i];
        i++;
        j++;
    }
    str1[j] = '\0';
    i = 0, j = 0;
    while (str3[i] != '\0')
    {
        str2[j] = str3[i];
        i++;
        j++;
    }
    str2[j] = '\0';
    cout << "\nStrings after swaping is :";
    cout << "\n\t String 1 = " << str1;
    cout << "\n\t String 2 = " << str2;
    
    return 0;
}