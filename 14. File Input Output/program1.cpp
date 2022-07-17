/*  C++ Program to Maintain Book Records using File Handling  */

#include<iostream>
#include<stdio.h>
#include<fstream>
#include<iomanip>
#include<string>

using namespace std;

int menu();

class book{
    private:
    int bookid;
    char title[20];
    float price;
    protected:
    int allotbookid();
    void showheader();
    public:
    void getbook();
    void showbook();
    void addbook();
    void viewbook();
    void searchbook();
    void deletebook();
    void modifybook();
};

int book::allotbookid(){
    ifstream fin;
    book temp;
    int id=0;
    fin.open("Sample60.txt");
    if(!fin){
        return(id+1);
    }
    else{
        fin.read((char *)&temp, sizeof(temp));
        while(!fin.eof())
        {
            id=temp.bookid;
            fin.read((char *)&temp, sizeof(temp));
        }
        id++;
        return (id);
    }
}

