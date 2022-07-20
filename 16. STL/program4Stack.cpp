#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<string> s;
    s.push("Prateek");
    s.push("Kumar");
    s.push("Bhagat");
    cout<<"Top ELement "<<s.top()<<endl;
    s.pop();
    cout<<"Top ELement "<<s.top()<<endl;
    s.pop();
    cout<<"Top ELement "<<s.top()<<endl;
    cout<<"Soze of the stack "<<s.size()<<endl;
}