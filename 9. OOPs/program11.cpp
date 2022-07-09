#include <iostream>

using namespace std;

class sum
{
private:
    int n, s = 0;

public:
    void calc()
    {
        // int a;
        // cout << "\nEnter the last number : ";
        // cin >> a;
        // n = a;
        for (n = 1; n <= 100; n + 2)
        {
            s = s + n;
        }
    }
    void display()
    {
        cout << "\nThe sum of number's is : " << s;
    }
};

int main()
{
    sum number;
    number.calc();
    number.display();
    return 0;
}