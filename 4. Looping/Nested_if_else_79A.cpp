#include<iostream>

using namespace std ;

int main(){

    int score{};
    cout << "Enter the score on the exam (0-100) : \n" ;
    cin >> score ;
    char letter_grade{};

    if (score >= 0 && score <=100){
        if (score >=90)
          letter_grade = 'A' ;
        else if (score >=80 && score < 90)
          letter_grade = 'B' ;
          else if ( score >=70 && score <80)
          letter_grade = 'C' ;
        else if (score >= 60 && score < 70)
          letter_grade = 'D' ;
        else 
          letter_grade = 'E' ;
        cout << "Your Grade is : " << letter_grade << endl;
        if (letter_grade == 'E')
        cout << "Sorry! You Must repeat the class"<<endl;
        else 
        cout <<"Congrats!"<<endl;

    }
}