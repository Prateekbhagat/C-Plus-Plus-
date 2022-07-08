// ? Array of objects using Pointers
#include <iostream>

using namespace std;

class shop
{
    int id;
    float price;

public:
    void getdata(int a, float b)
    {
        id = a;
        price = b;
    }
    void show()
    {
        cout << "\nCost of this item is : " << id << endl;
        cout << "\nPrice of this item is : " << price << endl;
    }
};
int main()
{
    int size;
    cout << "\nEnter the size : ";
    cin >> size;
    shop *ptr = new shop[size];
    shop *ptrtemp = ptr;
    int p, i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout << "\nEnter id and price of item " << i + 1 << endl;
        cin >> p >> q;
        // (*ptr).getdata(p,q);
        ptr->getdata(p, q);
        ptr++;
    }
    for (i = 0; i < size; i++)
    {
        cout << "\nitem number : " << i + 1 << endl;
        ptrtemp->show();
        ptrtemp++;
    }

    return 0;
}