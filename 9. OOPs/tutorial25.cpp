// Array of objects  passing objects as functions arguments in C++
#include <iostream>

using namespace std;

class employee
{
private:
    int id;
    int salary;

public:
    void setid(void)
    {
        salary = 90;
        cout << "\nEnter the id of employee : ";
        cin >> id;
    };
    void getid(void)
    {
        cout << "\nThe id of the employee is : " << id << " \nand \nThe salary of the employee is : " << salary;
    };
};

int main()
{
    employee fb[5];
    for (int i = 1; i <= 5; i++)
    {
        fb[i].setid();
        fb[i].getid();
    }

    return 0;
}