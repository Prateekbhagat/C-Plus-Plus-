#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t, r, sum = 0;
    cout << "\nEnter any number : ";
    cin >> n;
    t = n;
    while (t > 0)
    {
        r = t % 10;
        sum += r;
        t = t / 10;
    }
    cout << "\nSum of digits of the number is : " << sum;

    return 0;
}