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
        cout << "\nRoll no. : " << rno << endl;
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
        cout << "\nMarks obtained : \nPart1 = " << part1 << "\nPart2 = " << part2 << endl;
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
    void put_score()
    {
        cout << "\nSports : " << score << endl;
    }
};

class result : public test, public sports
{
    float total;

public:
    void display()
    {
        total = part1 + part2 + score;
        put_no();
        put_marks();
        put_score();
        cout << "\nTotal Score = " << total << endl;
    }
};
int main()
{
    result stu;
    stu.get_no(1905012);
    stu.get_mark(90.1, 90.9);
    stu.getscore(9);
    stu.display();
    return 0;
}