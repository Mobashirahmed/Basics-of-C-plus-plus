/*
  . . . . . . .
    . . : : : :
      . * * * *
        . * * *
          . * *
            . *
              :
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1;
    while(row<=n){
        
        // space print kar lete hai
        int space = row - 1;
        while(space){
            cout << " ";
            --space;
        }

        // star print kar lete hai
        int star = n - row + 1;
        while(star){
            cout << "*";
            --star;
        }
        cout <<endl;
        ++row;
    }
}