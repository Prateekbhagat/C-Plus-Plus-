// ? Multi level Inheritance Program

#include <iostream>

using namespace std;

/*
For a protected member :
                            Public Decleration  ||  Private Decleration ||   Protected Decleration    
    1. Private Members    :   Not inherited     ||    Not inherited     ||      Not inherited
    2. Protected Members  :    Protected        ||     Private          ||       Protected
    3. Public Members     :     Public          ||     Private          ||       Protected
*/

class student
{
protected:
    int roll_number;

public:
    void setRollNo(int);
    void getrollno(void);
};

void student ::setRollNo(int r)
{
    roll_number = r;
}

void student ::getrollno()
{
    cout << "\nThe Roll Number of the studnet is : " << roll_number << endl;
}

class exam : public student
{
protected:
    float math, phy;

public:
    void setmarks(float, float);
    void getmarks();
};

void exam ::setmarks(float m1, float m2)
{
    math = m1;
    phy = m2;
};

void exam ::getmarks()
{
    cout << "\nThe marks scored by the student with roll Number is :" << math << endl;
    ;
    cout << "\nThe marks scored by the student with roll Number is :" << phy << endl;
    ;
};

class result : public exam
{
    float percentage;

public:
    void display()
    {
        getrollno();
        getmarks();
        cout << "\nYour percentage is " << (math + phy) / 2 << "%" << endl;
    }
};

/*
Notes :-
    If we are inherting B from A and C from B : [ A--->B--->C ]
    1. A is the base class for B and B is the base class for C
    2. [ A--->B--->C ] is called Inheritance Path.
*/

int main()
{
    result prateek;
    prateek.setRollNo(1905012);
    prateek.setmarks(98.0, 90.0);
    prateek.display();
    return 0;
}