// Display the first and last element of the array

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[50], size;
    cout << "\nEnter the size of array [<50] : ";
    cin >> size;
    int i;
    for (i = 0; i < size; i++)
    {
        cout << "Enter the array element " << i << " : ";
        cin >> a[i];
    }
    cout << "\nFirst Element of the array is : " << a[0] << endl;
    cout << "\nLast Element of the array is : " << a[size - 1] << endl;
}