#include <iostream>

using namespace std;

class complex
{
    int real, imaginary;

public:
    void setdata(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void getdata()
    {
        cout << "\nThe real part is : " << real << endl;
        cout << "\nThe imaginary part is : " << imaginary << endl;
    }
};

int main()
{
    complex a1;
    // a1.setdata(6, 90);
    // a1.getdata();

    // complex *ptr = &a1 ;

    complex *ptr = new complex ;
    // delete ptr;
    (*ptr).setdata(733,849);
    (*ptr).getdata();

    // (*ptr).setdata(733,849); is exactly same as 
    ptr->setdata(74 , 78);
    // (*ptr).getdata(); is as good as 
    ptr->getdata(); 

    // Array of objects 
    complex *ptr1 = new complex[3];
    // delete[] ptr1;
    (*ptr1).setdata(73,89);
    (*ptr1).getdata();
    ptr1->setdata(3738, 743847);
    ptr1->getdata();
    return 0;
}