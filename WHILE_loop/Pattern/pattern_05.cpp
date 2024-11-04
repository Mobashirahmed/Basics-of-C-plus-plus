/*
    To print the following pattern:
    n n n .. n
    : : : :: :
    3 3 3 .. 3
    2 2 2 .. 2
    1 1 1 .. 1
*/
/*
    Above pattern is inversion of following pattern along the horizontal edge:
    1 1 1 .. 1
    2 2 2 .. 2
    3 3 3 .. 3
    : : : :: :
    n n n .. n
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
            cout << n-i+1 << " ";
            ++j;
        }

        cout <<endl;
        ++i;
    }
}