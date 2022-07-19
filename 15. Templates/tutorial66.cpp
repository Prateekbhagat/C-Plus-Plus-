// ! C Templates with default parameters in class templates

#include <iostream>

using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class harry
{
public:
    T1 a;
    T2 b;
    T3 c;
    harry(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display(){
        cout<<"\nThe value of a is "<<a<<endl;
        cout<<"\nThe value of b is "<<b<<endl;
        cout<<"\nThe value of c is "<<c<<endl;
    }
};

int main()
{
    harry <string, int,long long> h("ABcdd", 89.221, 8764638637643438);
    h.display();
    return 0;
}