#include<iostream>
#include<cstring>   // for c-style string functions 
#include<cctype>    // for character based functions


using namespace std ;

int main(){
    char first_name[20] ;
    char last_name[20] ;
    char full_name[50] ;
    char temp[50] ;
    
//    cout << first_name ;       //its gonna give a garbage value

    cout <<"Please Enter your first name : " ;
    cin >> first_name ;

    cout <<"Please Enter your last name : " ;
    cin >> last_name ;
    cout << "==================================" << endl;

    cout << "Hello, "<<first_name<<" your first name has "<<strlen(first_name)<<" characters"<<endl;
    cout <<"and your last name," << last_name << " has " <<strlen(last_name) << " characters "<<endl;

    strcpy(full_name , first_name) ;     // copy first name to full name
    strcat(full_name , " ") ;            // concatenate full name with a space 
    strcat(full_name , last_name) ;      // concatenate last name to full name
    cout << "your full name is : "<<full_name<<endl;
     

    cout << "Enter your full name : " ;
    cin.getline(full_name , 50) ; //getline func. reads the entire line while using white space 
    cout << "your full name is : "<<full_name<<endl;

    cout << "==================================" << endl;
    strcpy(temp , full_name);      //  comparision func. 
    if (strcmp(temp,full_name)==0)             //  comparision func.
        cout << temp <<" and "<<full_name<<" are same "<<endl;    
    else 
        cout << temp <<"and "<<full_name<<" are different "<<endl;    
    cout << "==================================" << endl;

    for(size_t i{0} ; i<strlen(full_name) ; i++){   // size_t is an unsigned integer or long integer
       if(isalpha(full_name[i]))                    // is alpha is true if it is a character 
         full_name[i] = toupper(full_name[i]) ;     // toupper is a func. for changing the character from lower case to upper case 
    }
    cout << "your full name is : "<<full_name<<endl;

    cout << "==================================" << endl;
    if (strcmp(temp,full_name)==0)                  //  comparision func.
        cout << temp <<" and "<<full_name<<" are same "<<endl;    
    else 
        cout << temp <<" and "<<full_name<<" are different "<<endl;  
             
    cout << "==================================" << endl;
    cout << "Result of comparing "<<temp << " and "<<full_name<<" "<<strcmp(temp , full_name) <<endl;     //  comparision func.
    cout << "Result of comparing "<<full_name << " and "<< temp <<" "<<strcmp(full_name , temp) <<endl;   //  comparision func.

   
}
