// ? Virtural Base Class
// ! student to test and sports and then to result
/*
student --> test
student --> sports
test --> result
sports --> result
*/
#include <iostream>

using namespace std;

class student
{
protected:
    int rollNo;

public:
    void setRoll(int a)
    {
        rollNo = a;
    }
    void printroll(void)
    {
        cout << "\nYour Roll No. is : " << rollNo << endl;
    }
};

class test : virtual public student
{
protected:
    float math, phy;

public:
    void setmarks(float x, float y)
    {
        math = x;
        phy = y;
    }
    void printmarks(void)
    {
        cout << "\nYour marks in math is : " << math << endl;
        cout << "\nYour marks in physics is : " << phy << endl;
    }
};

class sports : virtual public student
{
protected:
    int score;

public:
    void setScore(int s)
    {
        score = s;
    }
    void printScore(void)
    {
        cout << "\nYour PT score is : " << score << endl;
    }
};

class result : public test, public sports
{
private:
    float total;

public:
    void display(void)
    {
        total = math + phy + score;
        printroll();
        printmarks();
        printScore();
        cout << "\nYour total score is : " << total << endl;
    }
};
int main()
{
    int roll, score;
    float math, phy;
    cout << "\nEnter your roll number : ";
    cin >> roll;
    cout << "\nEnter your marks in mathematics : ";
    cin >> math;
    cout << "\nEnter your marks in Physics : ";
    cin >> phy;
    cout << "\nEnter your Score marks for PT : ";
    cin >> score;
    result Prateek;
    Prateek.setRoll(roll);
    Prateek.setmarks(math, phy);
    Prateek.setScore(score);
    Prateek.display();
    return 0;
}