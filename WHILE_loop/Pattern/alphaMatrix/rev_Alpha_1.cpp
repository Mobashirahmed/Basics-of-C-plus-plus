/*
    To print hte following pattern:
    . . . . . .
    : : : : : :
    D E F G . .
    C D E F . .
    B C D E . .
    A B C D . .
*/

#include<iostream>
using namespace std;

int main(){
     int n;
     cin >> n;

     int row = 1;

     while(row<=n){
        char ch = 'A' + n - row;
        int col = 1;
        while(col<=n){
            cout << ch << " ";
            ++ch;
            ++col;
        }
        cout <<endl;
        ++row;
     } 
}