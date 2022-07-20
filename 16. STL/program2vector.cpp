#include <iostream>
#include<vector>

using namespace std;

int main()
{
    // ! Vector STL

    vector<int> v;
    cout<<"Capactiy -> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capactiy -> "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capactiy -> "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capactiy -> "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capactiy -> "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capactiy -> "<<v.capacity()<<endl;
    cout<<"size -> "<<v.size()<<endl;

    vector <int> a(5,1);
    vector <int> last(a);
    for(int i:last)
    {
        cout<<i<<' ';
    }
}