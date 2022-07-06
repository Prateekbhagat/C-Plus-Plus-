#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{

    string s0;
    string s1{"Apple"};
    string s2{"Banana"};
    string s3{"Kiwi"};
    string s4{"apple"};
    string s5{s1};       // Apple
    string s6{s1, 0, 3}; // 0 is the index of s1 and 3 is the size or the last index
    string s7(10, '*');  // 10 is number of characters to be printed which is given in the single quote

    cout << s0 << endl; // No grabage
    cout << s0.length() << endl;
// Initialization
    cout << "\n Initialization "<<" \n=============================================" << endl;
    cout << " s1 is initialized to : " << s1 << endl;
    cout << " s2 is initialized to : " << s2 << endl;
    cout << " s3 is initialized to : " << s3 << endl;
    cout << " s4 is initialized to : " << s4 << endl;
    cout << " s5 is initialized to : " << s5 << endl;
    cout << " s6 is initialized to : " << s6 << endl;
    cout << " s7 is initialized to : " << s7 << endl;

// Comaparison
    cout <<"Comparison "<<"\n=================================================="<<endl;
    cout <<boolalpha ;
    cout << s1 << " == " << s5 << " : " << (s1 == s5) <<endl;
    cout << s1 << " == " << s2 << " : " << (s1 == s2) <<endl;
    cout << s1 << " != " << s2 << " : " << (s1 != s5) <<endl;
    cout << s1 << " < " << s2 << " : " << (s1 < s2) <<endl;
    cout << s2 << " > " << s1 << " : " << (s2 > s1) <<endl;
    cout << s4 << " < " << s5 << " : " << (s4 < s5) <<endl;
    cout << s1 << " == " << "Apple" << " : " << (s1 == "Apple") <<endl;

// Assignment
    s1 = "Watermelon" ;
    cout << "s1 is now "<< s1 <<endl; // Watermelon

    s2 = s1 ;
    cout << "s2 is now "<< s2 <<endl; // Watermelon

    s3 = "Prateek" ;
    cout << "s3 is now " << s3 << endl;  // Prateek

    s3[0] = 'B' ;
    cout << "s3 change the first letter to 'B' : "<< s3 << endl ;   // Brateek
    s3.at(0) = 'P' ;
    cout << "s3 change the first letter to 'P' : "<< s3 << endl ;   // Prateek

// Concatenation
    s3 = "Watermelon" ;
    cout << "\nConcatenation"<<"\n===================================="<<endl;

    s3 = s5 + " and " + s2 + " Juice" ;  // Apple and Banana Juice
    cout <<"s3 is now " << s3 <<endl;   // Apple and Banana Juice

   // s3 = "nice" + " cold " + s5 +" juice" ;              // Compiler ERROR

// For loop

    cout << "\nLooping"
         << "\n=============================================" << endl;
    s1 = "Apple";
    for (size_t i(0); s1.length(); ++i) // size_t is NON-NEGATIVE number ;
        cout << s1.at(i);
    // cout << s1 [i] ; //Apple
    cout << endl;

// Range Based For Loop

    for (char c : s1)
        cout << c;
    cout << endl;

// Substring
    cout <<"\nSubString" <<"\n=================================="<<endl;
    s1 = "This is a test ";

    cout << s1.substr(0,4) << endl;     // This 
    cout << s1.substr(5,2) << endl;     // is 
    cout << s1.substr(10,4) << endl;    // Test

// Erase
    cout << "\nErase "<<"\n========================================="<<endl;
    s1.erase(0,5); // Erase This from s1 results in "is a test"
    cout << "s1 is now : " << s1 << endl; // is a test

// Getline
   cout  <<"\n getline"<<"\n====================================="<<endl;

    string full_name {};
    cout << "Enter your Full NAME : " ;
    getline (cin,full_name);
    cout << "Your full Name is : " <<full_name<<endl;

// Find
    cout << "\nFind" << "\n====================================="<<endl;
    s1 = "The secret word is Boo" ;
    string word{};

    cout <<"Enter the Word to find :";
    cin>>word;

    size_t position = s1.find(word) ;
    if (position != string::npos)
        cout << "Found " <<word<< " at position : " <<position <<endl;
    else 
    cout << "Sorry" ;
    return 0;
}