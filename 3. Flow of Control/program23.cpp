#include <bits/stdc++.h>

using namespace std;

int main()
{
    int digit1, digit2, digit3, n;
    cout << "\nEnter the number : ";
    cin >> n;
    for (int i = 0; i <= 500; i++)
    {
        digit1 = i / 100;
        digit2 = i / 10 - digit1 * 10;
        digit3 = i % 10;
        if ((digit1 * digit1 * digit1) + (digit2 * digit2 * digit2) + (digit3 * digit3 * digit3) == i)
        {
            cout << i << endl;
        }
    }
    return 0;
}