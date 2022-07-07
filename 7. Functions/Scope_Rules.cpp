#include<iostream>

using namespace std;

int num {300};

void global_example(){
    cout << "\nGlobal num is : "<<num <<" in global_example"<<endl;
    num *= 2 ;
    cout << "\nGlobal num is : "<<num <<" in global_example"<<endl;
}

void local_example(int x){
    int num{1000}; //local to local example
    cout << "\nLocal num is : "<<num << " in local example start"<<endl;
    num = x ;
    cout << "local num is : "<<num <<" in local example end"<<endl;
}

void static_local_example (){
    static int num {5000} ;
    cout <<"\nLocal static num is : "<< num << " in static local example"<<endl;
    num += 1000 ;
    cout <<"\nLocal static num is : "<< num << " in static local example"<<endl;

}
int main(){
    int num {100} ;  // Lcal to main
    int num1 {500} ;  // Lcal to main
    cout << "Local num is : "<< num << " in main"<< endl;

    {
        int num {200} ;
        cout << "local num is : " << num << " in inner block in main"<<endl;
        cout << "Inner block in main can see out num 1 is: "<< num1<<endl; 
    }

    cout << "local num is : "<<num <<" in main"<<endl;   

    local_example(10);
    local_example(20);

    global_example();
    global_example();

    static_local_example();
    static_local_example();
}