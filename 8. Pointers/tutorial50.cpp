#include <iostream>

using namespace std;

int main()
{
    // Basic Example
    int a = 4;
    int *ptr = &a;
    cout << "\nThe address of a is " << ptr << endl;
    cout << "\nThe value of a is " << *(ptr) << endl;

    // New Operator
    int *x = new int(40);
    cout << "\nThe value at address x is : " << *(x) << endl;
    float *y = new float(903.383);
    cout << "\nThe value at address y is : " << *(y) << endl;

    // Allocating Array using this new operator
    int *arr = new int[3];
    arr[0] = 90;
    *(arr + 1) = 190;
    arr[2] = 950;
    // delete[] arr;
    cout << "\nThe value pf arr[0] is : " << arr[0] << endl;
    cout << "\nThe value pf arr[1] is : " << arr[1] << endl;
    cout << "\nThe value pf arr[2] is : " << arr[2] << endl;

// Delete Operator 

    return 0;
}