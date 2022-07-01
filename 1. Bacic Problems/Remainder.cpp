#include<iostream>
using namespace std ;
int main() {
    float num , divider ;
    cout << "\nEnter the number : " ;
    cin >> num ;
     cout << "\nEnter the divider : " ;
    cin >> divider ;
    int remainder ;
    remainder = (int) num % (int)divider ;
   
    cout <<"\nThe quotient of the "<<num<< " is : "<< (num/divider) <<endl;

    cout <<"\nThe remainder of the "<<num<< " is : "<< remainder <<endl;
    return 0;
}