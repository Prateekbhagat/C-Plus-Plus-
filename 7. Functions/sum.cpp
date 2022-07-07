#include <iostream>

using namespace std;
int sum(int a);
int main()
{
    int n, result;
    cout << "\nEnter the number for \\ sum \\ : ";
    cin >> n;
    result = sum(n);
    cout << "\nTHe result is " << result;
    return 0;
}
int sum(int a)
{
    if (a != 0)
        return a + sum(a - 1);
    return 0;
}
