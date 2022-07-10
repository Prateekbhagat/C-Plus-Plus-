#include <iostream>
#include <string>

using namespace std;

class student
{
private:
    string name, place;
    int roll, pin;

public:
    student();
    void read();
    void display();
    ~student() { cout << "\nDestructor is being Called....."; }
};
student::student()
{
    cout << "\nConstructor is called ..........";
}
void student ::read()
{
    cout << "\nEnter your name : ";
    getline(cin, name);
    cout << "\nEnter your place : ";
    getline(cin, place);
    cout << "\nEnter your Roll number : ";
    cin >> roll;
    cout << "\nEnter your pincode : ";
    cin >> pin;
}

void student::display()
{
    cout << "\nYour Name is : " << name;
    cout << "\nYour place is : " << place;
    cout << "\nYour roll is : " << roll;
    cout << "\nYour pin is : " << pin;
}

int main()
{
    student prateek;
    prateek.read();
    prateek.display();
    return 0;
}