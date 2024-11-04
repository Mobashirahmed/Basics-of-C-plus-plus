/*
    To print the following pattern:
    11 12 13 .. 1n 
    21 22 23 .. 2n
    31 32 33 .. 3n
     :  :  :  :  :
    n1 n2 n3 .. nn
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 1;
    while(i<=n){

        int j = 1;
        while(j<=n){
            cout << i << j << " ";
            ++j;
        }

        cout <<endl;
        ++i;
    }
}