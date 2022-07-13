#include<iostream> 

using namespace std;

class base 
{
    public :
        base()
        {
            cout<<"Default of Base"<<endl;            
        }
        base(int x)
        {
            cout<<"Param of Base "<<x<<endl;
        }        
};
class derived: public base
{
    public:
        derived()
        {
            cout<<"Default of Derived"<<endl;
        }
        derived(int a)
        {
            cout<<"Param of Derived "<<a<<endl;
        }
        derived(int x, int a):base(x)
        {
            cout<<"Param of Derived "<<a<<endl;
        }
};
int main()
{
    derived e;
    
    cout<<"\n\nNew Object"<<endl;
    derived e1(10);

    cout<<"\n\nNew Object"<<endl;
    derived d(10,9);
}  
