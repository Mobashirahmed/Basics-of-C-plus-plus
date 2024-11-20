/*
    To print the following pattern:
    111111111
     22222222
      3333333
       444444
        55555
         6666
          777
           88
            9
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1;
    while(row<=n){
        // space print kar lete hai
        int space = row -1;
        while(space){
            cout << " ";
            --space;
        }
        
        // numbers print kar lete hai
        int run = n - row + 1;
        while(run){
            cout << row;
            --run;
        }
        cout <<endl;
        ++row;
    }
    return 0;
}