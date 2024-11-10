/*
    To print the following pattern:
    1
    2 2
    3 3 3
    : : : .
    n n n : n
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
            cout << row << " ";
            ++col;
        }
        cout <<endl;
        ++row;
    }
}