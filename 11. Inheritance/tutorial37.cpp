#include <iostream>

using namespace std;

// Base Class
class employee
{
    float salary;

public:
    int id;
    employee(int idn)
    {
        id = idn;
        salary = 8390;
    }
    void printdata()
    {
        cout << "\nThe id no. is : " << id << " and the salary is : " << salary;
    }
    employee() {}
};

// Derived Class Syntax
/*
class {{derived-class-name}} : {{visibility-mode}} base-class-name
{
    class members/method/etc...
}
Note:-
1. Default visibility mode is private
2. Public visibility mode : Public members of the base class becomes PUBLIC members of the derived class
3. Private visibility mode : Public members of the base class becomes PRIVATE members of the derived class
4. Private members are never inherited
*/
// Creating a programmer class derived from employee base class

class programmer : public employee
{
public:
    int language = 90;
    programmer(int impid)
    {
        id = impid;
    }
    void getdata()
    {
        cout << id << endl;
    }
};

int main()
{
    employee prateek(3), prem(6);
    prateek.printdata();
    prem.printdata();
    cout << endl;
    programmer skillF(1029839);
    cout << skillF.language << endl;
    cout << skillF.id << endl;
    skillF.getdata();

    return 0;
}