/*
    To print the following pattern:
    n .. 3 2 1
    n .. 3 2 1
    n .. 3 2 1
    : :: : : :
    n .. 3 2 1
*/
/* Above pattern is inversion of following pattern along the vertical edge:
    1 2 3 .. n
    1 2 3 .. n
    1 2 3 .. n
    : : : :: :
    1 2 3 .. n
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
            cout << n-j+1 << " ";
            ++j;
        }
        cout <<endl;
        ++i;
    }
}