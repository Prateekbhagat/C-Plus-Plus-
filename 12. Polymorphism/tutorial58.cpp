// ? Abstract Base Class

#include <iostream>
#include <cstring>

using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0; // do-nothing-function --> pure virtual function.
};

class CWHvideo : public CWH
{
    float videolength;

public:
    CWHvideo(string s, float r, float vl) : CWH(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "\nThis is an amazing video with title " << title << endl;
        cout << "\nRatings : " << rating << " out of 5 stars" << endl;
        cout << "\nLength of this video is : " << videolength << " minutes" << endl;
    }
};
class CWHtext : public CWH
{
    int words;

public:
    CWHtext(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "\nThis is an amazing text tutorial with title " << title << endl;
        cout << "\nRatings of this text tutorial: " << rating << " out of 5 stars" << endl;
        cout << "\nNo. of words in this text tutorial is : " << words << " words" << endl;
    }
};
int main()
{
    string title;
    float rating, vlen;
    int words;

    // for code with harry video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHvideo djvideo(title, rating, vlen);
    djvideo.display();

    // for code with harry text
    title = "Django tutorial and python tutorial";
    words = 4647;
    rating = 4.89;
    CWHtext djtext(title, rating, words);
    djtext.display();

    CWH *tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}

// * * Rules for virtual func.
// 1. They cannot be static
// 2. They are accessed by object pointers
// 3. Virtual func. can be a friend of another class
// 4. A virtual function in base class might not be used
// 5. If a virtual function defined in the base class, there is no necessity of redifining it in the derived class