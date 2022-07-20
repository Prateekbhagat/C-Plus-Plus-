#include <iostream>
#include<array>

using namespace std;

int main()
{
    // ! Array STL
    int basic[3] = {1,2,3};
    array<int , 4> a = {1,2 ,4,5};
    int size = a.size();
    for(int i = 0;i<size; i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<"Element at 2nd index -> "<<a.at(2)<<endl;

    cout<<"Empty or not -> "<<a.empty()<<endl;

    cout<<"Element First-> "<<a.front()<<endl;

    cout<<"Element Second -> "<<a.back()<<endl;

}