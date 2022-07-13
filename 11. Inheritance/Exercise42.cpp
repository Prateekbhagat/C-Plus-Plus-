/* Create 2 Classes :
    1. Simple Calculator :- Takes input of two numbers using a utility func. & performs +, -, *, / and display the results using another func.
    2.Scientific Calculator :- Takes input of two numbers using a utility func. & performs any four scientific operations of your choice and display the results using another func.

    Create another class HybridCalculator and inherit it using these 2 classes: 
    Q1. what type of inheritance are you using ?
    Q2. which mode of inheritance are you using ?
    Q3. Create an object HybridCalculator annd display results of simple and scientific calculator ?
    Q4. How is code reusability umplemented ?
*/

// ? Solution :
#include <iostream>
#include <cmath>
using namespace std;

class simpleCaalculator
{
    int a, b;

public:
    void getdata()
    {
        cout << "\nEnter the value of a : " << endl;
        cin >> a;
        cout << "\nEnter the value of b : " << endl;
        cin >> b;
    }

    void performOperations()
    {
        cout << "\nThe value of a + b is : " << a + b << endl;
        cout << "\nThe value of a - b is : " << a - b << endl;
        cout << "\nThe value of a * b is : " << a * b << endl;
        cout << "\nThe value of a / b is : " << a / b << endl;
    }
};

class scientificCalculator
{
    float a, b;

public:
    void getdatascientific()
    {
        cout << "\nEnter the value of a : " << endl;
        cin >> a;
        cout << "\nEnter the value of b : " << endl;
        cin >> b;
    }

    void performOperationsscientific()
    {
        cout << "\nThe value of cos(a) is : " << cos(a) << endl;
        cout << "\nThe value of sin(b) is : " << sin(b) << endl;
        cout << "\nThe value of exponential(a) is : " << exp(a) << endl;
        cout << "\nThe value of tan(a) is : " << tan(a) << endl;
    }
};

class hybridCalaculator : public simpleCaalculator, public scientificCalculator
{
};

int main()
{
    simpleCaalculator calc;
    calc.getdata();
    calc.performOperations();
    scientificCalculator sc;
    sc.getdatascientific();
    sc.performOperationsscientific();
    hybridCalaculator calcu;
    calcu.getdata();
    calcu.performOperations();
    calcu.getdatascientific();
    calcu.performOperationsscientific();
    return 0;
}