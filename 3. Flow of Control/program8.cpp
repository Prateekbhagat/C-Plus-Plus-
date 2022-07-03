#include<bits/stdc++.h>
 
using namespace std ;
 
int main()
{
    float salary , grossSalary, hra , da ;
    cout<<"\nEnter the salary of the employee : ";
    cin>>salary;
    if(salary<1500){
        hra = 0.1 * salary;
        da = 0.9 * salary;
        grossSalary = salary + hra + da;
        cout<<"\nThe gross salary of the employee is : Rs. "<<grossSalary;
    }
    else if(salary>=1500){
        hra = 500;
        da = 0.98 * salary;
        grossSalary = salary + hra + da;
        cout<<"\nThe gross salary of the employee is : Rs. "<<grossSalary;
    }
    return 0;
}