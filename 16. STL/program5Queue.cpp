#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    queue<string> s;
    s.push("Prateek");
    s.push("Kumar");
    s.push("Bhagat");
    cout<<"Top ELement "<<s.front()<<endl;
    s.pop();
    cout<<"Top ELement "<<s.front()<<endl;
    s.pop();
    cout<<"Top ELement "<<s.front()<<endl;
    cout<<"Soze of the stack "<<s.size()<<endl;
}