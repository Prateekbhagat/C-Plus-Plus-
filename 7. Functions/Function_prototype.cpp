//Section 11 Namespace 
// Functions

#include<iostream>

using namespace std ;

// Function Prototypes
double calc_area_circle(int radius);
double calc_volume_cylinder(double radius , double height);
void area_circle();
void volume_cylinder();


const double pi {3.1459} ;

int main () 
{
    area_circle() ;
    volume_cylinder() ;

    return 0 ;
}
double calc_area_circle(double radius){
    return pi * radius * radius ;
}

double calc_volume_cylinder(double radius , double height){
    return pi * radius *radius *height ;
}

void area_circle(){
    double radius {};
    cout << "\nEnter the radius of the circle : ";
    cin >> radius ;
    cout << "The area of the circle with radius " << radius << " is " << calc_area_circle(radius) <<endl; 
}

void volume_cylinder(){
    double radius {};
    double height {} ;
    cout << "\nEnter the radius of the cylinder : ";
    cin >> radius ;
    cout << "\nEnter the Height of the cylinder : ";
    cin >> height ;
    cout << "The volume of the cylinder is : "<< calc_volume_cylinder(radius,height) <<endl;
}