#include<iostream>

using namespace std ;

int main ()
{
    const int rows {2} ;
    const int cols {3} ;
    int movie_rating [rows][cols] ;

    // Accessing Movie ratings 

    
    cout << "Enter the elements : " ;
        cin >> movie_rating[0][1] ;

    cout << "Enter the elements : " ;
        cin >> movie_rating[0][2] ;

    cout << "Enter the elements : " ;
        cin >> movie_rating[0][3] ;

    cout << "Enter the elements : " ;   
     cin >> movie_rating[1][1] ;

    cout << "Enter the elements : " ;
        cin >> movie_rating[1][2] ;

    cout << "Enter the elements : " ;
        cin >> movie_rating[1][3] ;
    
    cout << " The first matrix is : " << movie_rating[1][2] ;

}
