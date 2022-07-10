/* C++ Program to show Example of Default copy constructor */
#include <iostream>

using namespace std;

class book
{
private:
    string Title;
    int pages;

public:
    book(int p, string t)
    {
        Title = t;
        pages = p;
    }
    void display()
    {
        cout << "\nThe title is : " << Title;
        cout << "\nThe pages is : " << pages;
    }
};

int main()
{
    book b1(67, "hello world");
    b1.display();
    book b2(b1);
    b2.display();
    book b3(b2);
    b3.display();
    return 0;
}