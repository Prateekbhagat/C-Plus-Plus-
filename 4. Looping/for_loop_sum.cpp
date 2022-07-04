#include<iostream>
#include<iomanip>

using namespace std ;

int main ()
{
    int number {} ;
    cout << "Enter the number : " ;
    cin >> number ;

    int i{} ;
    int sum{};

    for(i=1 ; i <= number ; i++)
    {
        if(i%2==1)
        sum = sum + i ;
    }
    cout << "The total sum = " << sum << endl;

    return 0;
}