/* C++ Program for Inheritance Beyond Single Level  */
#include <iostream>
#include <string>
using namespace std;

class industry
{
protected:
    string name;

public:
    void insert()
    {
        cout << "\nEnter your name : ";
        getline(cin, name);
    }
    void output()
    {
        cout << "\nYour name is " << name;
    }
};
class computer : public industry
{
protected:
    string education;
    float salary;

public:
    void insert()
    {
        industry::insert();
        cout << "\nEnter your highest qualification : ";
        getline(cin, education);
        cout << "\nEnter your salary : ";
        cin >> salary;
    }
    void output()
    {
        industry::output();
        cout << "Highest Qualification is : " << education << "\n";
        cout << "Salary Drawn is : " << salary << "\n";
    }
};

class manager : public industry
{
protected:
    int experience;
    string grade;

public:
    void insert()
    {
        industry::insert();
        cout << "Your Previous Experience : ";
        cin >> experience;
        cout << "\nYour Grade : ";
        cin >> grade;
    }
    void output()
    {
        industry::output();
        cout << "Total Previous Experience : " << experience << "\n";
        cout << "Your Grade : " << grade << "\n";
    }
};
class admin : public industry
{
protected:
    string type;

public:
    void insert()
    {
        industry::insert();
        cout << "\nType : ";
        getline(cin, type);
    }
    void output()
    {
        industry::output();
        cout << "\nType is : " << type << endl;
    }
};

class soft : public computer
{
protected:
    string expert;

public:
    void insert()
    {
        computer::insert();
        cout << "\nEnter Your Expertise Field : ";
        getline(cin, expert);
    }
    void output()
    {
        computer::output();
        cout << "\nYour Expertise field is : " << expert << endl;
    }
};

class hard : public computer
{
protected:
    int experience;

public:
    void insert()
    {
        computer::insert();
        cout << "\nEnter Previous Experience : ";
        cin >> experience;
    }
    void output()
    {
        computer::output();
        cout << "\nYour experience is : " << experience << endl;
    }
};

int main()
{
    soft s1;
    hard h1;
    manager m1;
    admin a1;
    cout << "\nEnter the data for software personnel : " << endl;
    s1.insert();
    cout<<"\nInformation of the software personnel : "<<endl;
    s1.output();
}

