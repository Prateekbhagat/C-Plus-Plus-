// ! Function templates with parameters 

#include<iostream>
 
using namespace std ;

// float funcaverage(int a , int b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

template <class T1, class T2>
float funcaverage(T1 a , T2 b){
    float avg = (a+b)/2.0;
    return avg;
}
template<class T>
void swapp(T &a, T &b){
    T temp = a;
    a = b ;
    b = temp;
}
int main()
{
    float a;
    a  = funcaverage(18 , 9);
    int x =12 , y = 93 ;
    swapp(x,y);
    cout<<x <<endl<<y<<endl;
    printf("The average of two numbers is %f",a);
    return 0;
}