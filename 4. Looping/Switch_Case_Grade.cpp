#include<iostream>
#include<iomanip>

using namespace std ;

int main(){

    char letter_grade {};
    cout << "Enter the grade you expect on the exam : ";
    cin >> letter_grade;
    
    switch (letter_grade)
    {
        case 'a' :
        case 'A' :
        cout << "You need a 90 or above , study hard!\n";
        break ;
        case 'b' :
        case 'B' :
        cout << "You need 80 - 89 for a B,Go study\n";
        break ;
        case 'c' :
        case 'C' :
        cout << "You need 70 - 79 for an Average grade\n";
        break ;
        case 'e' :
        case 'E' :
        {
            char confirm{};
            cout << "Are you sure (Y/N)?";
            cin >> confirm ;
            if (confirm == 'y' || confirm == 'Y')
            cout << "Okay I guess You din't study.."<<endl;
            else if (confirm == 'n' || confirm == 'N')
            cout << " Good! GO Study " << endl;
            else
            cout << "Illegal choice" <<endl;
            break;
        }
        default : 
        cout << "Sorry! Not a valid Grade \n";
    }

    cout << "Grade you entered was : "<<letter_grade <<endl;
    return 0;


}