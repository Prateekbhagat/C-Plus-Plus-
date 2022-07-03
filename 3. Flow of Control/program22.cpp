#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, max = 0, min = 0;
    char choice;
    do
    {
        cout << "\nEnter the number : ";
        cin >> n;
        if (n > max)
        {
            max = n;
        }
        if (n < min || n == min)
        {
            min = n;
        }
        cout << "Do you want to enter more numbers(y/n) : ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "\nThe maximum number entered is : " << max;
    cout << "\nThe manimum number entered is : " << min;

    return 0;
}