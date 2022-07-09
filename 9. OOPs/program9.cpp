#include<iostream>
 
using namespace std ;
 
class student{
    private: 
    char name[20], regd[15], branch[5];
    int sem;
    public:
    void input();
    void display();
};
void student :: input(){
    cout<<"\nEnter the name : ";
    gets(name);
    cout<<"\nEnter the Registration Number : ";
    gets(regd);
    cout<<"\nEnter the Branch : ";
    gets(branch);
    cout<<"\nEnter the Semester : ";
    cin>>sem;
}
void student :: display(){
    cout<<"\nName : "<<name;
    cout<<"\nRegistration Number : "<<regd;
    cout<<"\nBranch : "<<branch;
    cout<<"\nSemester : "<<sem;
}
int main()
{
    student prateek;
    prateek.input();
    prateek.display();
    return 0;
}