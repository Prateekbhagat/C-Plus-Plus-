#include <iostream>

using namespace std; 

class employee
{
    int id;
    static int count;

public:
    void set_data()
    {
        cout << "\nEnter your id : ";
        cin >> id;
        count++ ;
    };
    static void intcount(void){
        cout <<"\nThe value of count is : "<<count;
    }
    void getdata()
    {
        cout << "\nThe id of your employee is : " << id << " and emplyee number is "<<count;
    }
} chotu, om, mom;

int employee :: count ; // default value is 0 
int main()
{
    chotu.set_data();
    chotu.getdata();
    employee :: intcount();

    om.set_data();
    om.getdata();
    employee :: intcount();

    mom.set_data();
    mom.getdata();
    employee :: intcount();
    return 0;
}