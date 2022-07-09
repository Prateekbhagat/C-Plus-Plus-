// Reverse the number

#include <iostream>

using namespace std;

class rev
{
private:
    int n, n1, rn = 0, d;

public:
    void input(void);
    void calc(void);
    void display(void);
};

void rev ::input()
{
    cout << "\nEnter the number : ";
    cin >> n;
}
void rev ::calc()
{
    n1 = n;
    while (n > 0)
    {
        d = n % 10;
        rn = (rn * 10) + d;
        n = n / 10;
    }
}

void rev ::display()
{
    cout << "\nThe reverse of the number entered " << n1 << " is " << rn << endl;
}
int main()
{
    rev number ;
    number.input();
    number.calc();
    number.display();

    return 0;
}