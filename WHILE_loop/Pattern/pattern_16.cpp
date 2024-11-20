/* To print the following pattern:
            1
           121
          12321
         1234321
        123454321
       12345654321
      1234567654321
     123456787654321
    12345678987654321
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1;
    while(row <= n){

        // ab spaces print kar lete hai
        int space = n - row;
        while(space){
            cout << " ";
            --space;
        }

        // print 1st triangle
        int col = 1;
        while(col<=row){
            cout << col;
            ++col;
        }

        // print 2nd triangle
        int start = row - 1;
        while(start){
        cout << start;
        --start;  
        }
        cout <<endl;
        ++row;
    }
}