// ! Run time polymorphism

#include <iostream>

using namespace std;
class baseclass
{
    public :
    int var_base = 1;
    virtual void display(){
        cout<<"\n1 Displaying Base class variable var_base "<<var_base<<endl;
    }
};

class derivedclass : public baseclass
{
    public:
    int var_derived = 2;
    void display(){
        cout<<"\n2 Displaying Base class variable var_base "<<var_base<<endl;
        cout<<"\n2 Displaying derived class variable var_base "<<var_derived<<endl;
    }
};
int main()
{
    baseclass *base_class_pointer;
    baseclass obj_base ;
    derivedclass obj_derived;
    base_class_pointer = &obj_derived ; // Pointing base class pointer to derived class 

    // base_class_pointer ->var_base = 89; 
    //// base_class_pointer -> var_derived = 1244 ; // will throw/ an error
    base_class_pointer -> display();

    // derivedclass *derived_class_pointer;
    // derived_class_pointer = &obj_derived ;
    // derived_class_pointer -> var_derived = 9374 ;
    // derived_class_pointer -> display();

    
    return 0;
}