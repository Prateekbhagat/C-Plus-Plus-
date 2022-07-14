/*  C++ Program to Maintain Employee Database using Virtual class  */

#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstring>

using namespace std;

class person
{
protected:
    string name;
    int code;

public:
    void getdetail()
    {
        cout << "\nEnter the name :- ";
        getline(cin, name);

        cout << "\nEnter code :- ";
        cin >> code;
    }
    void dispdetail(void)
    {
        cout << "\nName :- " << name;
        cout << "\nCode :- " << code;
    }
};
class account : virtual public person
{
protected:
    float pay;

public:
    void getpay()
    {
        cout << "\nEnter the pay amount :- ";
        cin >> pay;
    }
    void display()
    {
        cout << "\nPay  :- " << pay;
    }
};

class admin : virtual public person
{
protected:
    int experience;

public:
    void getexpr()
    {
        cout << "\nEnter the experience in yrs :- ";
        cin >> experience;
    }
    void dispexpr()
    {
        cout << "\nExperience :- " << experience;
    }
};

class master : public account, public admin
{
public:
    void create()
    {
        cout << "\n======GET DATA IN======";
        getdetail();
        getpay();
        getexpr();
    }
    void display()
    {
        cout << "\n\n=====DISPLAY DETAILS=====\n";
        dispdetail();
        display();
        dispexpr();
    }

    void update()
    {
        cout << "\n\n=====UPDATE DETAILS=====\n";
        cout << "\nChoose detail you want to update\n";
        cout << "1)  NAME\n";
        cout << "2)  CODE\n";
        cout << "3)  EXPERIENCE\n";
        cout << "4)  PAY\n";
        cout << "Enter your choice:- ";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\nEnter Name :- ";
            cin >> name;
            break;
        case 2:
            cout << "\nEnter code :- ";
            cin >> code;
            break;
        case 3:
            cout << "\nEnter Pay :-";
            cin >> pay;
            break;
        case 4:
            cout << "\nEnter Experience :-";
            cin >> experience;
            break;
        default:
            cout << "\nInvalid Choice";
        }
    }
};

int main()
{
    master ob1;
    int choice;
    while (1)
    {
        cout << "\n\n=======Employee Database========\n\n";
        cout << "\nChoose Operation you want to perform\n";
        cout << "1)  Create  Record\n";
        cout << "2)  Display Record\n";
        cout << "3)  Update  Record\n";
        cout << "4)  Exit\n";
        cout << "\nEnter your choice:- ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            ob1.create();
            break;
        case 2:
            ob1.display();
            break;
        case 3:
            ob1.update();
            break;
        case 4:
            exit(1);
        default:
            cout << "\n\nInvalid choice\nTry again\n\n";
        }
    }
    return 0;
}