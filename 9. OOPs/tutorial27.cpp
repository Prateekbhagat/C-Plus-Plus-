// Friend classes and member func.

#include <iostream>

using namespace std;

//Forward Decleration

class complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumrealComplex(complex, complex);
    int sumCompComplex(complex, complex);
};

class complex
{
    int a, b;

    // Individually declaring functions as friends
    // friend int Calculator :: sumrealComplex(complex , complex );
    // friend int Calculator :: sumCompComplex(complex , complex );

    // Declaring the entire Calculator class as friend

    friend class Calculator;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    };

    // friend complex sumcomplex(complex o1, complex o2);

    void printnumber()
    {
        cout << "\nYour number is " << a << " + " << b << "i" << endl;
    };
};

int Calculator ::sumrealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
};
int Calculator ::sumCompComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
};

int main()
{
    complex o1, o2, sum;
    o1.setnumber(1, 4);
    o1.printnumber();

    o2.setnumber(5, 8);
    o2.printnumber();

    Calculator calc;
    int res = calc.sumrealComplex(o1, o2);
    cout << "\nThe sum of real part of o1 and o2 is " << res << endl;
    int resc = calc.sumCompComplex(o1, o2);
    cout << "\nThe sum of Complex part of o1 and o2 is " << resc << endl;

    // sum = sumcomplex(c1 ,c2);
    // sum.printnumber();

    return 0;
}