/*
     To print the following pattern:
     A B C ..
     B C D ..
     C D E ..
     : : : ::
*/


#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int row = 1;
    while(row<=n){

        int col = 1;
        while(col<=n){
            // cout << row+col-1 << " ";
            // add 'A'-1 to the expression:
            // row+col-1 = 1
            // row+col-1+'A'-1 = 1+'A'-1
            // row+col+'A'-2 = 'A'
            char alpha = row+col+'A'-2;
            
            cout << alpha << " ";
            ++col;
        }
        cout <<endl;
        ++row;
    }
}