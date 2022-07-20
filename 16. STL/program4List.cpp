#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int> l;
    cout<<"Printing n"<<endl;
    list<int> n(5,90);
    for(int i : n)
    {
        cout<<i<< " ";
    }
    cout<<endl;
    l.push_back(9);
    l.push_back(9);
    l.push_front(19);
    l.push_front(3);
    for(int i : l)
    {
        cout<<i<< " ";
    }
    cout<<"Size of list "<<l.size()<<endl;
}