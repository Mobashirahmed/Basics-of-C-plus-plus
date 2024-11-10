/*
    To print the following the pattern:
            .
          . :
        . . *
      . . * *
    . . * * *
  . . * * * *
. . : : : : :
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1;
    while(row<=n){
        // space print karenge
            int space = n - row;
            while(space){
                cout << " ";
                --space;
            }

        // stars print karenge
            int col = 1;
            while(col<=row){
                cout << "*" ;
                ++col;
            }
            cout <<endl;
            ++row;
    }
}