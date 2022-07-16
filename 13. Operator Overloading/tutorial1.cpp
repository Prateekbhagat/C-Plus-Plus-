#include<iostream>
#include"Mystring.h"
using namespace std;


int main(){
    Mystring empty;
    Mystring Lary("lary");
    Mystring stooge(Lary);

    empty.display();
    Lary.display();
    stooge.display();
    return 0;
}