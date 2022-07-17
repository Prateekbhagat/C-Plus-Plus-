#include<iostream>
#include<fstream>  
/* 
? The useful classes for working with files in C++ are :
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase
*/

/*
? In order to work with files in C++, you will to open it. Primarily, there are two ways to open a file :
1. using the constructor
2. Using the member function open() of the class
*/
using namespace std ;
 
int main()
{
    string pb = "Prateek Bhagat is my name";
    // Opening files using constructor and writing it 
    // ofstream Prateek("Sample60.txt"); // Write Operation
    // Prateek << pb;
    // cout << pb;
    // cout <<"\n";
    string bp;
    // Opening Files using constructor and reading it 
    ifstream bhagat("Sample60b.txt") ;
    getline(bhagat, bp);
    cout << bp;
    return 0;
}