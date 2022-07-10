#include<iostream>
 
using namespace std ;

class counter{
    private: 
    int count;
    public:
    counter (){
        count = 0;
    }
    void inc_count(){
        count++;
    }
    int get_count(){
        return count;
    }
};

int main()
{
    counter a;
    cout<<"\nBefore calling func. count :: "<<a.get_count();
    a.inc_count();
    cout<<"\nAfter calling func. count :: "<<a.get_count();
    return 0;
}