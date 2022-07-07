#include <iostream>
void naturalNum(int lowerlimit, int upperlimit);
void printnaturalnum(int lowerlimit , int upperlimit);

using namespace std;

int main()
{
    int lowerlimit, upperlimit ;
    cout << "\nEnter the lower limit : ";
    cin >> lowerlimit;
    cout << "\nEnter the upper limit : ";
    cin >> upperlimit;
    // cout << "\nThe sum of the given inputs is : " << naturalNum(lowerlimit, upperlimit);
    naturalNum(lowerlimit, upperlimit) ;
    printnaturalnum(lowerlimit , upperlimit);

    return 0;
}
// Using Functions 

void naturalNum(int lowerlimit, int upperlimit)
{
    for (int i = lowerlimit; i <= upperlimit; i++)
    {
        cout << "\nThe natural numbers are : " << i;
    }
}

// Using Recursion 
void printnaturalnum(int lowerlimit , int upperlimit){
    if(lowerlimit > upperlimit)
    return ;
    cout <<"\nThe natural numbers is : "<< lowerlimit ;
    printnaturalnum(lowerlimit + 1 , upperlimit);
}

