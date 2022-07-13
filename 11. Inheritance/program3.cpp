/*  C++ Program for Enter Patient details using Inheritance  */
#include <iostream>
#include <string>

using namespace std;

class doctor
{
    string name;
    string degree;

public:
    void getedu()
    {
        cout << "\nEnter the Doctor name : ";
        getline(cin, name);
        cout << "\nEnter Doctorate Degree : ";
        getline(cin, degree);
    }
    void showedu()
    {
        cout << "\nDoctor name is : " << name;
        cout << "\nDoctorate Degree : " << degree;
    }
};

class patient
{
    string name;
    string bed_number;

public:
    void getdata()
    {
        cout << "\nEnter Patient Name : ";
        getline(cin, name);
        cout << "\nEnter Bed Number : ";
        getline(cin, bed_number);
    }
    void showdata()
    {
        cout << "\nPatient Name : " << name;
        cout << "\nBed Number : " << bed_number;
    }
};
class department
{
    string ward;

public:
    void getdata()
    {
        cout << "\nEnter ward name : ";
        getline(cin, ward);
    }
    void showdata()
    {
        cout << "\nWard Name : " << ward;
    }
};

class amount {
    int dues;
    patient pat;
    doctor doc;
    department dept;
    public:
    void getdata(){
        pat.getdata();
        dept.getdata();
        doc.getedu();
        cout<<"\nEnter Dues of the patient : ";
        cin>>dues;
    }
    void showdata(){
        pat.showdata();
        dept.showdata();
        doc.showedu();
        cout<<"\nTotal Dues of patient : "<<dues;
    }
};
int main(){
    amount a1;
    cout<<"\nEnter Data "<<endl;
    a1.getdata();
    cout<<"\nInserted Data is : "<<endl;;
    a1.showdata();   
}