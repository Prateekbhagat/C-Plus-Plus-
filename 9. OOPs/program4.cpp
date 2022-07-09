#include <bits/stdc++.h>

using namespace std;

class time
{
    int hr, min, sec;

public:
    void get();
    void display();
    void sum(time &, time &);
};
void time::get()
{
    cout << "\nEnter the hour : ";
    cin >> hr;
    cout << "\nEnter the minutes : ";
    cin >> min;
    cout << "\nEnter the seconds : ";
    cin >> sec;
}
void time::display()
{
    cout << "Hours : " << hr << " Minutes : "
         << " Seconds : " << sec << endl;
}
void time::sum(time &t1, time &t2)
{
    sec = t1.sec + t2.sec;
    // hr = t1.hr + t2.hr ;
    min = sec / 60;
    sec = sec % 60;
    min = min + t1.min + t2.min;
    hr = min / 60;
    min = min % 60;
    hr = hr + t1.hr + t2.hr;
}

int main()
{
    time t1, t2, t3;
    cout << "\nEnter 1st time details :: ";
    t1.get();
}