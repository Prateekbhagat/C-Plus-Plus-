/*  C++ Program to demonstrate an Example of Hybrid Inheritance  */
#include <iostream>

using namespace std;
class stu
{
protected:
    int rno;

public:
    void get_no(int a)
    {
        rno = a;
    }
    void put_no()
    {
        cout << "\nRoll No. = " << rno << endl;
    }
};

class test : public stu
{
protected:
    float part1, part2;

public:
    void get_mark(float x, float y)
    {
        part1 = x;
        part2 = y;
    }
    void put_marks()
    {
        cout << "\nMarks obtained : \nPart 1 = " << part1 << "\nPart 2 = " << part2 << endl;
    }
};
class sports
{
protected:
    float score;

public:
    void getscore(float s)
    {
        score = s;
    }
    void putscore(void)
    {
        cout << "Sports : " << score << "\n";
    }
};
class result : public test, public sports
{
    float total;

public:
    void display(void)
    {
        total = part1 + part2 + score;
        put_no();
        put_marks();
        putscore();
        cout << "\nTotal Score = " << total << endl;
    }
};
int main()
{
    result stu;
    stu.get_no(1905012);
    stu.get_mark(90.0, 90.0);
    stu.getscore(20);
    stu.display();
    return 0;
}