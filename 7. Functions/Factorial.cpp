#include <iostream>

using namespace std;
int factorial(int a);
int main()
{
    int n, result;
    cout << "\nEnter the number for factorial : ";
    cin >> n;
    result = factorial(n);
    cout << "\nThe Factorial of " << n << " is " << factorial(n);
    return 0;
}
int factorial(int a)
{
    if (a > 1)
        return a * factorial(a - 1);
    else
        return 1;
    // return 0;
}