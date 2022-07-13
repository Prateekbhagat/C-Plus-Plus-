// Protected Access Modifier in CPP
#include <iostream>

using namespace std;

class base
{
protected:
    int a;

private:
    int b;
};
/*
For a protected member :
                            Public Decleration  ||  Private Decleration ||   Protected Decleration    
    1. Private Members    :   Not inherited     ||    Not inherited     ||      Not inherited
    2. Protected Members  :    Protected        ||     Private          ||       Protected
    3. Public Members     :     Public          ||     Private          ||       Protected
*/

class derived : protected base
{
};

int main()
{
    base c;
    derived d;
    // cout << d.a << endl; // Will not work since a is protected in both base as well as derived class
    return 0;
}