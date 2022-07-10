#include<iostream>
 
using namespace std ;
 
class simple{
    int data1 ;
    int data2 ;
    public : 
    simple(int a = 7273, int b = 90){
        data1 = a;
        data2 = b;
    }
    void printdata();
};

void simple :: printdata(){
    cout<<"\nThe value data is "<<data1 <<" and "<<data2 <<endl;
} 

int main()
{
    simple s(1,5);
    s.printdata();
    simple sb(1);
    sb.printdata();
    simple pc;
    pc.printdata();

    return 0;
}