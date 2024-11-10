/*
    To print the following pattern:
    1      2      3      .. n
    n+1    n+2    n+3    .. n+n
    2n+1   2n+2   2n+3   .. 2n+n
     :      :      :     ::  :
    n²-n+1 n²-n+2 n²-n+3 :: n²

    e.g; for n = 3;
    1 2 3
    4 5 6
    7 8 9
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int count = 1;
    
    int row = 1;
    while(row<=n){

        int col = 1;
        while(col<=n){
            cout << count << " ";
            ++count;
            ++col;
        }
        cout <<endl;
        ++row;
    }
}