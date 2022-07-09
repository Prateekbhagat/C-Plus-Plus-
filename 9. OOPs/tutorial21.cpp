// Private and Public in Classes //
#include<iostream>
 
using namespace std ;
 
class employee
{
    private : 
    int a , b , c;
    public :
    int d , e ;
    void getdata (int a1, int b1, int c1);
    void printdata (){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }
};
void employee :: getdata(int a1, int b1, int c1){
    a = a1 ;
    b = b1 ;
    c = c1 ;
}
int main()
{
    employee prateek ;
    int a , b , c ;
    prateek.d = 90 ;
    prateek.e = 83 ;
    cout <<"Enter three numbers : "<<endl;
    cin >>a>>b>>c ;
    prateek.getdata(a , b , c);
    prateek.printdata();
    return 0;
}