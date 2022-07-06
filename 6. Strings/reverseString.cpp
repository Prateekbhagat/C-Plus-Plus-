#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char str1[100], str[100];
    int i = 0, j = 0;
    cout << "\nEnter the string : ";
    gets(str);
    strcpy(str1, str);
    j = strlen(str) - 1;
    cout << "Length of string is : " << (j + 1);
    while (i < j)
    {
        int temp;
        temp = str[i];
        str[i] = str[j];
        str[j] = temp ;
        i++;
        j--;
    }
    cout << "\nAfter reversing the string : "<< str1 << "\n is " << str ;
    return 0;
}