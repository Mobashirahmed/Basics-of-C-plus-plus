/*
    To print hte following pattern:
    A
    B C
    D E F
    G H I J
    : : : : .
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=row){
            char ch = row+col+'A'-2;
            cout << ch << " ";
            ++col;
        }
        cout <<endl;
        ++row;
    }
}