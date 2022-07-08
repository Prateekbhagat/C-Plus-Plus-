// Section 12
// Simple pointers

#include<iostream>
#include<vector>
#include<string>

using namespace std ;

int main(){
    int num {10} ;
    cout << "Value of num is : " << num << endl;
    cout << "Size of num is : " <<sizeof num << endl;
    cout << "Address of num is : " << &num << endl;

    int *p;
    cout << "Value of p is : " << p << endl; // Garbage data
    cout << "Size of p is : " <<sizeof p<< endl;
    cout << "Address of p is : " << &p << endl;

    p = nullptr ;
    cout << "\nValue of p is : " << p << endl; // Garbage data

    int *p1 {nullptr} ;
    double *p2 {nullptr} ;
    unsigned long long *p3 {nullptr} ;
    vector <string> *p4 {nullptr} ;
    string *p5 {nullptr} ;

    cout <<"\n Size of p1 is : " <<sizeof p1<<endl;
    cout <<"\n Size of p2 is : " <<sizeof p2<<endl;
    cout <<"\n Size of p3 is : " <<sizeof p3<<endl;
    cout <<"\n Size of p4 is : " <<sizeof p4<<endl;
    cout <<"\n Size of p5 is : " <<sizeof p5<<endl;
 
    int score {10} ;
    double high_temp {100.7} ;
    int *score_ptr {nullptr} ;

    score_ptr = &score ;
     cout << "Value of score is : " << score_ptr << endl; // Garbage data
    cout << "Size of score is : " <<sizeof score<< endl;
    cout << "Address of score is : " << &score << endl;

    // score_ptr = &high_temp ;

    cout << endl;
    return 0 ;
}

