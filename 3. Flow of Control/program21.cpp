#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, sum_p = 0, sum_n = 0, sum_z = 0;
    char choice;
    do
    {
        cout << "\nEnter number : ";
        cin >> n;
        if (n > 0)
        {
            sum_p++;
        }
        else if (n < 0)
        {
            sum_n++;
        }
        else
        {
            sum_z++;
        }
        cout << "Do you want to Continue(y/n) : ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "\nPositive Number : " << sum_p;
    cout << "\nNegative Number : " << sum_n;
    cout << "\nZero's Number : " << sum_z;

    return 0;
}