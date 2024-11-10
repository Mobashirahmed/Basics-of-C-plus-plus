/*
    To print the following pattern:
    A
    A B
    A B C
    A B C D
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
            char ch = col+'A'-1;
            cout << ch << " ";
            ++col;
        }
        
        cout <<endl;
        ++row;
    }
}