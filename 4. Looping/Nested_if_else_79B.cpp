#include<iostream>
#include<iomanip>

using namespace std ;

int main(){


    int length{}, width{}, height{} ;
    double base_cost {2.50} ;

    const int tier1_threshold {100} ; //volume
    const int tier2_threshold {500} ; //volume

    int max_dimension_length {10} ;

    double tier1_surcharge {0.10} ;
    double tier2_surcharge {0.25} ;
    
    //All dimensions must be 10 Inches or less Than 10 inches 

    int package_volume {} ;
    cout << "Welcome To the package Calculator\n";
    cout << "Enter the Length Width and Height of the package \n";
    cin>>length >>width >>height ;

    if (length>max_dimension_length || width > max_dimension_length || height > max_dimension_length){
        cout << "Sorry Package Rejected !\n" ;
    }
    else{
        double package_cost {} ;
        package_volume = length * width * height ;
        package_cost = base_cost ;

        if (package_volume > tier2_threshold){
            package_cost += package_cost*tier2_surcharge ;
            cout << "Adding Tier2 Surcharge \n"; 
        }

        else if (package_volume > tier1_threshold){
            package_cost += package_cost*tier1_surcharge ;
            cout << "Adding Tier1 Surcharge\n" ;
        }

        cout << fixed << setprecision(2) ;
        cout <<"The Volume of Your PACKAGE is : " << package_volume <<endl;
        cout << "Your PACKAGE will cost : $" << package_cost << " to be Shipped" << endl;
    }

    
    return 0;
    
}