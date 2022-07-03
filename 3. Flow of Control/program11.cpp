#include <bits/stdc++.h>

using namespace std;

int main()
{
    float math, phy, bio, chem, hindi;
    cout << "\nEnter the marks of subject : ";
    cin >> math;
    cout << "\nEnter the marks of subject : ";
    cin >> phy;
    cout << "\nEnter the marks of subject : ";
    cin >> chem;
    cout << "\nEnter the marks of subject : ";
    cin >> bio;
    cout << "\nEnter the marks of subject : ";
    cin >> hindi;
    float percentage;
    percentage = (math + phy + chem + bio + hindi) / 5;
    if (percentage >= 60)
    {
        cout << "\nFIRST Division";
    }
    else if (percentage >= 50 && percentage < 60)
    {
        cout << "\nSECOND Division";
    }
    else if (percentage >= 40 && percentage < 50)
    {
        cout << "\nTHIRD Division";
    }
    else
    {
        cout << "FAIL! STUDY HARD hehehehehehe";
    }
    cout<<"\nYour Percentage is : "<<percentage;
    return 0;
}