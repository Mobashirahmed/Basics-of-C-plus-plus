/*
    To print the following pattern:
    A
    B B
    C C C
    D D D D
    : : : : .
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1;
    while(row <= n){
        int col = 1;
        while(col<=row){
            char ch = row+'A'-1;
            cout << ch << " ";
            ++col;
        }
        cout <<endl;
        ++row;
    }
}