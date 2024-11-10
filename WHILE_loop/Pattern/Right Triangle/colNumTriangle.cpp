/*
    To print the following pattern:
    1
    1 2
    1 2 3
    : : : .
    1 2 3 : n
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
            cout << col << " ";
            ++col;
        }
        cout <<endl;
        ++row;
    }
}