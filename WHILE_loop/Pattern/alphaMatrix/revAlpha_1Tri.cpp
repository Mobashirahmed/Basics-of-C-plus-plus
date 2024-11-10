/*
    To print the following pattern:
    .
    : .
    D . .
    C D . .
    B C D . .
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
        while(col<=row){
            cout << ch << " ";
            ++ch;
            ++col;
        }
        cout <<endl;
        ++row;
    }
}