#include <iostream>

using namespace std;

class Bankdeposit
{
private:
    int principal;
    int years;
    float interestrate;
    float returnvalue;

public:
    Bankdeposit(){};
    Bankdeposit(int p, int y, float r); // r can be a value like 0.05
    Bankdeposit(int p, int y, int r);   // r can be a value like 10 %
    void show(void);
};
Bankdeposit ::Bankdeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestrate = r;
    returnvalue = principal;
    for (int i = 1; i <= y; i++)
    {
        returnvalue = returnvalue * (1 + r);
    }
};
Bankdeposit :: Bankdeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestrate = float(r) / 100;
    returnvalue = principal;
    for (int i = 1; i <= y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    };
};
void Bankdeposit ::show()
{
    cout << "\nPrincipal amount was " << principal
         << " Return value after " << years
         << " is " << returnvalue << endl;
};

int main()
{
    Bankdeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    bd3.show();
    cout << "\nEnter the value of p y and r" << endl;
    cin >> p >> y >> r;
    bd1 = Bankdeposit(p, y, r);
    bd1.show();
    cout << "\nEnter the value of p y and R" << endl;
    cin >> p >> y >> R;
    bd2 = Bankdeposit(p, y, R);
    bd2.show();
    return 0;
}