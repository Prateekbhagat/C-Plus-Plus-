// ! Member func. templates Overloading template func. in C 

#include <iostream>

using namespace std;

template <class T>
class harry
{
public:
    T data;
    harry(T a) 
    {
        data = a;
    }
    void display();
//     {
//         cout << data;
//     }
};

template <class T>
void harry<T> :: display(){
    cout << data<<endl;
};

int func(int a){
    cout<<"\nfirst func. called : "<<a<<endl;
    return a;
};


template <class T>
T func(T a){
    cout<<"\nSecond func. called : "<<a<<endl;
};

template <class T>
T fun1(T a){
    cout <<"\nThird func. is called : "<<a<<endl;
    return a;
}
int main()
{
    harry<float> h(5.38384);
    cout << h.data<<endl;
    h.display();

    func(53);
    fun1(748.2);
    return 0;
}