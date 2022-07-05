#include<iostream>
#include<vector>

using namespace std ;

int main()
{
    int test_scores [] {100, 50, 83, 93, 89} ;
    int high_score_per_level [10] ;
    double days_in_year {365} ;
    char vowels [] {'a' ,'e' , 'i' , 'o' ,'u'};

    test_scores[3] = 7378 ;
    // Accessing array elements 

    cout << "First score at index 0  : " << test_scores[0] << endl;
    cout << "Second score at index 1 : " << test_scores[1] << endl;
    cout << "Third score at index 2  : " << test_scores[2] << endl;
    cout << "Fourth score at index 3 : " << test_scores[3] << endl;
    cout << "Fifth score at index 4  : " << test_scores[4] << endl;

    cout <<"\n";

    // cout <<" The size of variable test score is : "<< test_scores.size() << endl;
    // cout <<" The size of variable vowels is : "<< vowels.size{} << endl;
    cout << "First score at index 0  : " << vowels[0] << endl;
    cout << "Second score at index 1 : " << vowels[1] << endl;
    cout << "Third score at index 2  : " << vowels[2] << endl;
    cout << "Fourth score at index 3 : " << vowels[3] << endl;
    cout << "Fifth score at index 4  : " << vowels[4] << endl;

}