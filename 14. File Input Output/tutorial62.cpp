#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ofstream out;
    // 2. Using the member function open() of the class
    out.open("Sample60.txt");
    out << "This is me\n";
    out << "This is me also\n";
    out << "This is me alsii \n";
    out.close();

    ifstream in;
    string st;
    in.open("Sample60b.txt");
    // getline(in, st);
    //  End of file = .eof()
    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st << endl;
    }
    // cout << st;
    in.close();

    return 0;
}