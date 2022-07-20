#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<int> s;
    s.insert(15);
    s.insert(15);
    s.insert(15);
    s.insert(4);
    s.insert(4);
    s.insert(4);
    s.insert(0);
    s.insert(0);

    for(auto i : s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    set<int> :: iterator iter = s.begin();
    iter++;
    s.erase(iter);

    for(auto i:s)
    {
        cout<<i<<endl;
    }
    
} 