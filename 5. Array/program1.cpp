#include <bits/stdc++.h>

using namespace std;
int main()
{
    string line;
    int i;
    cout << "\nEnter the string :: ";
    cin >> line;
    cout << "\nTHe original string is : " << line;
    int len = line.size();
    for (i = 0; i < len; i++)
    {
        if (!((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z')))
        {
            line[i] = '\0';
        }
    }
    cout << "\nAfter removing charcters, string is :: " << line << endl;
}