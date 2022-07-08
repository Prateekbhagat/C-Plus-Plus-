// ! This pointer in Cpp

#include <iostream>

using namespace std;

class A
{
    int a;

public:
    // ? dowm below there is two process :-
    // void setdata(int a){
    //         // a = a ; this will assign a to a garbage value
    //         this -> a = a ;
    // }
    A setdata(int a)
    {
        // a = a ; this will assign a to a garbage value
        this->a = a;
        return *this;
    }
    void getdata()
    {
        cout << "\nThe value of a is : " << a << endl;
    }
};
int main()
{
    // This is a keyword which is a pointer which points to the object which invokes the member func.
    A b;
    b.setdata(56);
    b.getdata();
    // b.getdata();
    return 0;
}