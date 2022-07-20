#include <iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_back(0);
    d.push_back(6);
    d.push_back(9);

    cout<<endl;

    cout<<"Print the first index element "<<d.at(0)<<endl;
    cout<<"Front "<<d.front()<<endl;
    cout<<"Back "<<d.back()<<endl;
    cout<<"Empty or not "<<d.empty()<<endl;
    return 0;
}