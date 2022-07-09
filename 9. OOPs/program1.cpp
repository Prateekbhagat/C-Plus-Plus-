// C++ Program to find factorial of a number using class

#include <iostream>

using namespace std;

class factorial
{
private:
    int n, n1, f = 1;

public:
    void input();
    void calc();
    void display();
};

void factorial :: input()
{
    cout << "\nEnter any number :: ";
    cin >> n;
}

void factorial ::calc()
{
    n1 = n;
    if (n == 1 || n == 0)
        cout << "\nThe factorial of number " << n << " is :: 1\n";
    else
    {
        while (n > 0)
        {
            f = f * n;
            n--;
        }
    }
}
void factorial ::display()
{
    cout << "\nThe Factorial of " << n1 << " is :: " << f << " \n";
}
int main()
{
    factorial a;
    a.input();
    a.calc();
    a.display();

    return 0;
}