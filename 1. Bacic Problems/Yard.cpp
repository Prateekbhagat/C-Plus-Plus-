#include<iostream>
using namespace std ;
int main(){
    int inch ;
    float yard ,feet ;
    cout << "Enter the inches : ";
    cin >> inch ;
    yard = (float)inch / 432 ;
    feet = (float) inch /12 ;

    cout << "After conversion the yard is : "<<yard<<endl;
    cout << "After conversion the feet is : "<<feet<<endl;
    return 0;

}