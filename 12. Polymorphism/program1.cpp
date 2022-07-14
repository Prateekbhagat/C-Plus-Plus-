/* C++ Program to demonstrate Run time polymorphism  */

#include <iostream>

using namespace std;

class Base
{
public:
    virtual void display()
    {
        cout << "\nThe member function Display() ";
        cout << "of the \"Base class Base \"is invoked \n";
    }
};
class D1 : public Base
{
public:
    void display()
    {
        cout << "\nThe member function Display() ";
        cout << "of the \"Derived Class D1 \"is invoked\n";
    }
};
class D2 : public Base
{
public:
    void display()
    {
        cout << "\n The member function Display() ";
        cout << "of the \"Derived Class D2\" is invoked ";
    }
};

int main()
{
    Base *base_ptr; // Pointer to the object of the base class

    D1 der1_obj; // Object of the first derived class D1

    base_ptr = &der1_obj; /* The address of the object der1_obj of the first derived class D1 is assigned to the pointer base_ptr of the base class B */

    base_ptr->display(); //Accessing the member function display()

    D2 der2_obj ; //Object of the second derived class D2

    base_ptr = &der2_obj ; /* The address of the object der2_obj of the first derived class D2 is assigned to the pointer base_ptr of the base class B */

    base_ptr->display(); //Accessing the member function display()
}