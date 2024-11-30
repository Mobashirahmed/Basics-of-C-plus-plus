#include<iostream>
using namespace std;

int main(){
    int a = 3;
    cout << a <<endl;

    if(true){
        int b = 5;
        cout << b <<endl;
    }

    int b = 1;
    cout << b <<endl;

    b = 7; // since b is an variable its value can be over-written
    cout << b <<endl;

// To Understand the scope of a variable:
    
    int i = 8;
    for(; i<8; i++){
        cout << "Hi" <<endl;
    }

    if(1){
        int c = 9;
        if(1){
            int c = 2;
            if(1){
                int c = 5;
                cout << c ;
            }
        }
    }
    
}