// ?  Multiple Inheritance Deep Drive with code Example in Cpp.

#include <iostream>

using namespace std;

/*
Syntax for inheriting in multiple inheritance 

class DerivedC : visibility - mode base1, visibilty mode - base2
{
    class body of class "DerivedC" 
};
*/

/*
For a protected member :
                            Public Decleration  ||  Private Decleration ||   Protected Decleration    
    1. Private Members    :   Not inherited     ||    Not inherited     ||      Not inherited
    2. Protected Members  :    Protected        ||     Private          ||       Protected
    3. Public Members     :     Public          ||     Private          ||       Protected
*/
class base1{
    protected :
    int base1int;
    public : 
    void int_base1int(int a){
        base1int = a ;
    }
};
class base2{
    protected :
    int base2int;
    public : 
    void int_base2int(int b){
        base2int = b ;
    }
};

class Derived : public base1, public base2{
    public:
    void show(){
        cout<<"\nThe value of base1 is : "<<base1int<<endl;
        cout<<"\nThe value of base2 is : "<<base2int<<endl;
        cout<<"\nThe sum of these values is : "<<base1int+base2int<<endl;
    }
};

/*
The inherited derived class will look something like this :
Data Members ;
    base1int --> Protected 
    base2int --> Protected

Member Function : 
    set_base1int() --> public
    set_base2int() --> public
    set_show()     --> public
*/
int main()
{
    Derived prateek;
    prateek.int_base1int(23) ;
    prateek.int_base2int(67);
    prateek.show();
    return 0;
}