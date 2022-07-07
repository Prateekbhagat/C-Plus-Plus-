#include <iostream>
#include <cstdlib>       // Required for rand ()
#include <ctime>         // Required for time ()

using namespace std ;

int main() 
{
    int random_numbers {} ;
    size_t count {20} ; // Number of random numbers to generate
    int min {1} ;       // Lower bound
    int max {6} ;       // Upper Bound
    // Seed the random number generator
    // If you don't seed the random number generator you will get the same sequence random numbers every run.
    cout << "Rand_max on my system is : " << RAND_MAX <<endl;
    srand (time (nullptr));
    for (size_t i{1} ; i<= count ; i++){
        random_numbers = rand() % max + min ;
        cout << random_numbers << " ";
    }
    cout << " " ;
    return 0 ;
}