#include <iostream>

using namespace std;

template <class T>
class vectorr
{
public:
    T *arr;
    int size;
    vectorr(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotProduct(vectorr &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
}; 

int main()
{
    // vectorr v1(3);
    // v1.arr[0] = 4;
    // v1.arr[1] = 34;
    // v1.arr[2] = 54;

    // vectorr v2(3);
    // v2.arr[0] = 1;
    // v2.arr[1] = 0;
    // v2.arr[2] = 1;
    // int a = v1.dotProduct(v2);
    // cout << a << endl;
    vectorr <float> v1(3);
    v1.arr[0] = 4;
    v1.arr[1] = 3;
    v1.arr[2] = 2;

    vectorr <float> v2(3);
    v2.arr[0] = 1;
    v2.arr[1] = 0;
    v2.arr[2] = 1;
    float a = v1.dotProduct(v2);
    cout << a << endl;
    return 0;
}