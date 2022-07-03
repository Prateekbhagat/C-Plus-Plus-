#include <bits/stdc++.h>

using namespace std;

int main()
{
    float a, b, c, d, root1, root2;
    cout << "\nEnter the value of a , b and C : ";
    cin >> a >> b >> c;
    d = ((b * b) - (4 * a * c));
    if (d > 0)
    {
        root1 = -(b + sqrt(d)) / (2 * a);
        root2 = -(b - sqrt(d)) / (2 * a);
        cout << "\nRoots are real & Distinct" << endl;
    }
    else if (d == 0)
    {
        root1 = (-b) / (2 * a);
        root2 = root1;
        cout << "\nRoots are equal and real" << endl;
    }
    else
    {
        root1 = (-b) / (2 * a);
        root2 = sqrt(-d) / (2 * a);
        cout << "Roots are imaginary";
    }
    cout << "\nRoot 1 = " << root1 << "\nRoot 2 = " << root2 << endl;
    return 0;
}