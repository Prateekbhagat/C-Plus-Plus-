#include<iostream>
#include<string>

using namespace std;

int main ()
{
    string alphabet{"ab cdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"} ;
    string key {"XZ[NLWEBGJHQRYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"} ;
    
    string secret_message{} ;
    cout << "Enter your secret message : ";
    getline (cin,secret_message);

    string encrypted_message{} ;
    cout <<"\nEncrypting Message....." <<endl;

// Ranged Based For Loop
    for (char a : secret_message) // or 
    // for (int i = 0 ; i <= alphabet.length() ; i++)
    {
        size_t place = alphabet.find(a) ;
        if (place != string::npos){
            char new_char {key.at(place)} ;
            encrypted_message += new_char ;

        }
        else {
            encrypted_message += a ;
        }
    }
    cout << "\nEncrypted Message : " << encrypted_message << endl;

    string decrypted_message {};
    cout << "\nDecrypting Message......." <<endl;
    
    
    for(char b: encrypted_message)
    {
        size_t place = key.find(b) ;
        if (place != string::npos){
                char new_char {alphabet.at(place)} ;
                decrypted_message += new_char ;
        }
        else {
            decrypted_message += b ;
        }
    }
    cout << "\nDecrypted Message : " << decrypted_message << endl;

}