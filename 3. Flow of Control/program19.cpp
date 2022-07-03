#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    bool flag = false;
    cout << "\nEnter the Number : ";
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            flag = true;
            break;
        }
    }
    if (flag == false && n > 1)
    {
        cout << "Number is Prime";
    }
    else
    {
        cout << "Number is not prime";
    }
    return 0;
}