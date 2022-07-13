/*  C++ Program display Student Marksheet using Multiple inheritance  */
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;
class student
{
    int roll;
    string nam;
    string add;
    string city;

public:
    student()
    {
        cout << "\nWelcome in the student information system " << endl;
    }
    void getdata()
    {
        cout << "\nEnter the student roll no. : " << endl;
        cin >> roll;
        cout << "\nEnter the student name : " << endl;
        getline(cin, nam);
        cout << "\nEnter ther student address : " << endl;
        getline(cin, add);
        cout << "\nEnter the student city : " << endl;
        getline(cin, city);
    }
    void putdata()
    {
        cout << "\n the student roll no: " << roll;
        cout << "\n the student name: " << nam;
        cout << "\n the student coty: " << city;
    }
};

class marks : public student
{
    int sub1;
    int sub2, sub3, per;

public:
    void input()
    {
        getdata();
        cout << "\nEnter the marks1 : ";
        cin >> sub1;
        cout << "\n enter the marks2: ";
        cin >> sub2;
        cout << "\n enter the marks3: ";
        cin >> sub3;
    }
    void output()
    {
        putdata();
        cout << "\n marks1: " << sub1;
        cout << "\n marks2: " << sub2;
        cout << "\n marks3: " << sub3 << "\n";
    }
    void calculate()
    {
        per = (sub1 + sub2 + sub3) / 3;
        cout << "\n total percentage :: " << per << "\n";
    }
};

int main()
{
    marks m1;
    int ch;
    int count = 0;
    do
    {
        cout << "\n1.Input data";
        cout << "\n2.Output Data";
        cout << "\n3.Calculate Percentage";
        cout << "\n4.Exit\n";
        cout << "\nEnter the choice :: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            m1.input();
            count++;
            break;
        case 2:
            m1.output();
            count++;
            break;
        case 3:
            m1.calculate();
            count++;
            break;
        }
    } while (ch != 4);
}