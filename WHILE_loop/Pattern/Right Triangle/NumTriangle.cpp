/*
    To print the following pattern:
    1
    2     3
    4     5    6
    :     :    :   .
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int num = 1;

    int row = 1;
    while(row<=n){

        int col=1;
        while(col<=row){
            cout << num << " ";
            ++num;
            ++col;
        }
        cout <<endl;
        ++row;
    }
}