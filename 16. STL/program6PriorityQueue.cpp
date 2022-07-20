#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // ? Max Heap
    priority_queue<int> maxi;

    // ? Mini Heap 
    priority_queue<int, vector<int>, greater<int> > mini;

    maxi.push(20);
    maxi.push(30);
    maxi.push(50);
    maxi.push(70);
    maxi.push(90);

    cout<<"Size of the maximum heap is "<<maxi.size()<<endl;

    int n = maxi.size();
    for(int i = 0; i<n;i++)
    {
        cout<< maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    mini.push(20);
    mini.push(30);
    mini.push(50);
    mini.push(70);
    mini.push(90);    
    int m = mini.size();
    for(int i = 0; i<m;i++)
    {
        cout<< mini.top()<<" ";
        mini.pop();
    }
}
