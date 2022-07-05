// Largest element of the array 

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[50], size;
    cout << "\nEnter the size of array [<50] : ";
    cin >> size;
    int i;
    for (i = 0; i < size; i++)
    {
        cout << "\nEnter the array[" << i << "] Element :: ";
        cin >> arr[i];
    }

    cout << "\nStored Data in the array\n";
    for (i = 0; i < size; i++)
    {
        cout << " " << arr[i] << " ";
    }
    int largest = arr[0];
    for (i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "\nLargest element is : " << largest << endl;
    return 0;
}