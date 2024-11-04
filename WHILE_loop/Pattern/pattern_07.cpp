/*
    To print the following pattern:
    nn .. n3 n2 n1
     : ::  :  :  :
    3n .. 33 32 31
    2n .. 23 22 21
    1n .. 13 12 11
*/
/*
    Above pattern is a inversion following pattern along the diagonal:
    11 12 13 .. 1n 
    21 22 23 .. 2n
    31 32 33 .. 3n
    :  :  :  :: :
    n1 n2 n3 .. nn
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 1;
// Loop that prints rows
    while(i<=n){

        int j = 1;
// Loop that prints columns
        while(j<=n){
            cout << n-i+1 << n-j+1 << " ";
            ++j;
        }
        
        cout <<endl;
        ++i;
    }
}