/*  C++ Program to define an Abstract Class in Polymorphism  */

#include <iostream>
#include<string>
using namespace std;

class card
{
protected:
    string reciptent;

public:
    virtual void greeting() = 0; // pure virtual function
};

class holiday : public card
{
public:
    holiday(string s)
    {
        reciptent = s;
    }
    void greeting()
    {
        cout << "Dear " << reciptent << endl;
    }
};

class birthday : public card
{
private:
    int age;

public:
    birthday(string s, int years)
    {
        reciptent = s;
        age = years;
    }
    void greeting() //Implementation of function in sub class
    {
        cout << "Dear " << reciptent << ",\nHappy " << age << "th"
             << " Birthday\n\n";
    }
};
class holi : public card
{
private:
    int colors;

public:
    holi(string s, int c)
    {
        reciptent = s;
        colors = c;
    }
    void greeting()
    {
        cout << "Dear " << reciptent << ",\n";
        cout << " Happy holi and lots of colors for you\n";
        for (int j = 0; j < colors; j++)
            cout << "*";
        cout << "\n\n";
    }
};
int main(){
    string name;
    cout<<"Enter the name : ";
    getline(cin,name);
    holiday hol(name);
    hol.greeting();
    birthday bd(name, 21);
    bd.greeting();
    holi rang(name, 7);
    rang.greeting();
}