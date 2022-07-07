// Section 11 
//  Function Parameters

#include<iostream>
#include<string>
#include<vector>

using namespace std ;

void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void print_vector(vector<string>);

int main(){
    int num {10} ;
    int another_num {20} ;

    cout << "Num before calling pass by value 1 is : "<<num<<endl;
    pass_by_value1(num) ;
    cout << "Num after calling pass by value 1 is : "<<num<<endl;

    cout << "another Num before calling pass by value 1 is : "<<another_num<<endl;
    pass_by_value1(another_num) ;
    cout << "another Num after calling pass by value 1 is : "<<another_num<<endl;

    string name {"Prateek"} ;
    cout << "\n Name before calling Pass by Value 2 : "<<name << endl;
    pass_by_value2(name) ;
    cout << "\n Name after calling Pass by Value 2 : "<<name << endl;

    vector<string> stooges {"lary" , "moe" ,"curly"} ;
    cout << "\n stooges before calling pass by value 3 :";
    print_vector(stooges);
    pass_by_value3(stooges);
    cout << "stooges before calling pass by value 3 : ";
    print_vector(stooges);
}

void pass_by_value1(int num){
    num = 1000 ;
}

void pass_by_value2(string s){
    s = "changed";
}

void pass_by_value3(vector<string> v){
    v.clear();
}

void print_vector(vector<string> v){
    for (auto s : v)
        cout << s <<" ";
    cout << endl;
}
