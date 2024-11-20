/* To print the following pattern:
    123456789
     23456789
      3456789
       456789
        56789
         6789
          789
           89
            9
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1;
    while(row<=n){
        
        // ab spaces ko print kar lete hai
        int space = row - 1;
        while(space){
            cout << " ";
            --space;
        }
        // ab numbers print kar lete hai
        int col = 1;
        int run = n - row + 1;
        while(run){
            cout << row + col - 1;
            ++col;
            --run;
        }
        cout <<endl;
        ++row;
    }
}