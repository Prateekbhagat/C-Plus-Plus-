// #include<iostream>
#include<bits/stdc++.h>
 
using namespace std ;

class student{
    protected:
    string name ;
    int age ;
    public : 
    // student(){} ;
    void get(){
        cout<<"\nEnter your name : ";
        cin>> name ;
        cout<<"\nenter age : ";
        cin>> age ;
    }
    void display(){
        cout<<"\nName is : "<<name ;
        cout<<"\nAge is : "<<age ;
    }
};

int main()
{
    student s ;
    ofstream file ;
    file.open("Sample60.txt");
    s.get();
    file.write((char *)&s, sizeof(s));
    // file.close();

    ifstream file1 ;
    file1.open("Sample60.txt");
    file1.read((char *)&s, sizeof(s));
    s.display();
    file1.close();
    return 0;
}