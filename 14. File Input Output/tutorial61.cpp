// ! Close function in file input output

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Writing to a File
    // connecting our file with pout stream

    ofstream pout("Sample60.txt");

    // Creating a name string and filling it with the string entered by the user
    string name;
    cout << "\nEnter your name : ";
    getline(cin, name);
    // getline(pout, name);

    // Writing a string to the file
    pout << name;
    // closing the file
    pout.close();

    // Reading a file

    ifstream pin("Sample60.txt");
    string content;
    getline(pin, content);
    cout << "\nThe content of this file is : " << content;
    pin.close();
    return 0;
}