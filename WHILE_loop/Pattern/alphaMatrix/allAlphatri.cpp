/*
    To print the following pattern:
    A
    B C
    D E F
    G H I J
    K L M N O
    P Q R S T U
    V W X Y Z ..
    : : : : : :: .
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1;
    
    char ch = 'A';
    
    while(row<=n){

        int col = 1;
        while(col<=row){
            cout << ch << " ";
            ++ch;
            ++col;
        }
        cout <<endl;
        ++row;
    }
}