#include<iostream>
using namespace std;

int main(){
    int A;
    cout << "Enter a number "; cin >> A ;
    
    
    // if(A>0)
    //     cout << A <<" is a positive number.";
    // else
    //     if(A<0)
    //             cout << A << " is a a negative number.";
    //     else
    //         cout << A << " is Zero.";
    
    
    if(A>0)
        cout << A <<" is a positive number.";
    else if(A<0) // using else if block
                cout << A << " is a a negative number.";
    else
        cout << A << " is Zero.";

}