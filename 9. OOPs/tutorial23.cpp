//Memory allocation using array in Classes in C++
#include <iostream>

using namespace std;

class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void)
    {
        counter = 0;
    };
    void setprice(void);
    void displayprice(void);
};

void shop ::setprice(void)
{
    cout << "\nEnter the item id for your " << counter + 1 << " item : ";
    cin >> itemid[counter];
    cout << "\nEnter the item cost for your " << counter + 1 << " item : ";
    cin >> itemprice[counter];
    counter++;
}

void shop ::displayprice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "\nThe item id is " << itemid[i] << " and cost is " << itemprice[i] << endl;
        /* code */
    }
}
int main()
{
    shop tenu, sakti;
    tenu.initcounter();
    tenu.setprice();
    tenu.setprice();
    tenu.setprice();
    tenu.displayprice();
    return 0;
}