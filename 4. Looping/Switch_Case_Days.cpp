#include<iostream>
#include<iomanip>

using namespace std ;

int main(){
    int num {};
    cout << "Enter the Number between (1 - 7) for the exact day : " ;
    cin >> num ;

    switch (num)
    {
    case 1 :
        cout << "Monday \n" ;
        break ;
    case 2 :
        cout << "Tuesday \n" ;
        break ;
    case 3 :
        cout << "Wednesday \n" ;
        break ;
    case 4 :
        cout << "Thursday \n" ;
        break ;
    case 5 :
        cout << "Friday \n" ;
        break ;
    case 6 :
        cout << "Saturday \n" ;
        break ;
    case 7 :
        cout << "Sunday \n" ;
        break ;
    
    default:
        cout << "Invalid Syntax Entered \n" ; 
        break;
    }
    return 0;
}