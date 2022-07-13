// ? Initialization list in Constructors 

#include<iostream>
 
using namespace std ;
/*
Syntax for initialization list in constructor :
constructor (argument-list) : initialization-section
{
    assignment + other code ;
}
class test {
    int a ; 
    int b ;
    public : 
    test (int i , int j) : a(i),b(j) {constructor-body}
};
*/
class test {
    int a ; 
    int b ;
    public : 
    test (int i , int j) : a(i),b(j){
        cout<<"\nProgram executed Successfully"<<endl;
    }
    void show(){
        cout <<"\nThe value of a is : "<<a<<endl;
        cout <<"\nThe value of b is : "<<b<<endl;
    }
};

int main()
{
    test score(5,9) ;
score.show();
    return 0;
}