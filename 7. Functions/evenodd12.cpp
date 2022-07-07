#include <iostream>
// void printeven(int lowerlimit, int upperlimit);
void printodd(int lowerlimit, int upperlimit);

using namespace std;

int main()
{
    int lowerlimit, upperlimit;
    cout << "\nEnter the lower limit : ";
    cin >> lowerlimit;
    cout << "\nEnter the upper limit : ";
    cin >> upperlimit;
    // printeven(lowerlimit, upperlimit);
    printodd(lowerlimit, upperlimit);
    return 0;
}
void printodd(int lowerlimit, int upperlimit)
{
    if (lowerlimit > upperlimit)
        return;
    cout << "\nThe odd numbers are : " << lowerlimit;
        printodd(lowerlimit+2, upperlimit);
}