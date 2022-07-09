#include<iostream>
 
using namespace std ;

class date{
    private:
    int dd, mm, yy;
    public:
    void input();
    void display();
};
void date:: input(){
    cout<<"\nEnter the date : ";
    cin>>dd;
    cout<<"\nEnter the Month : ";
    cin>>mm;
    cout<<"\nEnter the Year : ";
    cin>>yy;
}
void date:: display(){
    cout<<"\nThe date you entered was : "<<dd<<"/"<<mm<<"/"<<yy<<endl;
}

int main()
{
    date d;
    d.input();
    d.display();
    return 0;
}