// A C++ program to find the type of character entered by an user

#include<iostream>
using namespace std;

int main(){
    int ch;
    cout << "Enter a character ";
    ch = cin.get();

    if(48<=ch && ch<=57){
        cout << "You've Entered a Numeral (0-9) character" <<endl;
    }
    if(65<=ch && ch<=90){
        cout << "You've Entered a Upper-case alphabet (A-Z)" <<endl;
    }
    if(97<=ch && ch<=122){
        cout << "You've Entered a Lower-case alphabet (a-z)" <<endl;
    }

    cout << "ASCII code is " << ch ;
}