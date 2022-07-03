#include <bits/stdc++.h>

using namespace std;

int main()
{
    float quantity, totalExpenses, price;
    const float discount = 0.1;
    cout << "\nEnter the quantity : ";
    cin >> quantity;
    cout << "\nEnter the Price : ";
    cin >> price;
    totalExpenses = price * quantity;
    if (totalExpenses >= 5000)
    {
        totalExpenses = totalExpenses - (totalExpenses * discount);
    }
    cout << "\nTotal Amount to be paid is : Rs. " << totalExpenses << " ONLY.";
    return 0;
}