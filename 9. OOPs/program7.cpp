#include<iostream>
// #include <bits/stdc++.h>

using namespace std;

class complex
{
private:
    int real;
    int imaginary;

public:
    void setdata()
    {
        cout << "\nEnter the real number : ";
        cin >> real;
        cout << "\nEnter the imaginary number : ";
        cin >> imaginary;
    }
    void display()
    {
        cout << "\nThe Complex Number is : " << real << " + " << imaginary << "i" << endl;
    }
    void sum(complex c1, complex c2)
    {
        real = c1.real + c2.real;
        imaginary = c1.imaginary + c2.imaginary;
    }
};

// void complex::sum(complex c1, complex c2)
// {
//     {
//         real = c1.real + c2.real;
//         imaginary = c1.imaginary + c2.imaginary;
//     };
// }

int main()
{
    complex c1, c2, c3;
    cout << "\nEnter the 1st complex number : ";
    c1.setdata();

    cout<<"\nEnter the 2nd complex number : ";
    c2.setdata();

    cout<<"\nThe first complex number is : ";
    c1.display();
    cout<<"\nThe Second complex number is : ";
    c2.display();

    c3.sum(c1, c2);
    cout<<"\nThe sum of the two complex number is : ";
    c3.display();
    return 0;
}