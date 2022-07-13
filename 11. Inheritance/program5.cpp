/*  C++ Program to demonstrate an Example of Multiple Inheritance  */
#include<iostream>
using namespace std;

class m{
    protected:
    int m;
    public :
    void get_m(int x){
        m = x;
    }
};
class n{
    protected:
    int n;
    public:
    void get_n(int y){
        n = y;
    }
};
class p: public m , public n{
    public :
    void display(){
        cout<<"\nm = "<<m<<endl;
        cout<<"\nn = "<<n<<endl;
        cout<<"\nm*n = "<<m*n<<endl;
    }
};

int main(){
    p  P;
    P.get_m(7);
    P.get_n(9);
    P.display();
    return 0;
}