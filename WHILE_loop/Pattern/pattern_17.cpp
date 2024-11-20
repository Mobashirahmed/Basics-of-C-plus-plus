/* To print the following pattern:
    1 2 3 4 5 6 7 8 9 9 8 7 6 5 4 3 2 1 
    1 2 3 4 5 6 7 8 * * 8 7 6 5 4 3 2 1 
    1 2 3 4 5 6 7 * * * * 7 6 5 4 3 2 1 
    1 2 3 4 5 6 * * * * * * 6 5 4 3 2 1 
    1 2 3 4 5 * * * * * * * * 5 4 3 2 1 
    1 2 3 4 * * * * * * * * * * 4 3 2 1 
    1 2 3 * * * * * * * * * * * * 3 2 1 
    1 2 * * * * * * * * * * * * * * 2 1 
    1 * * * * * * * * * * * * * * * * 1 
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n<=9){

        int row = 1;
        while(row <= n){
            
            // 1st triangle print kar lete hai
            int tri1 = n - row + 1;
            int num1 = 1;
            while(tri1){
                cout << num1 << " ";
                ++num1;
                --tri1;
            }

            //2nd Triangle print kar lete hai
            int tri2 = row - 1;
            while(tri2){
                cout << "* ";
                --tri2;
            }
            
            //3rd Triangle print kar lete hai
            int tri3 = row - 1;
            while(tri3){
                cout << "* ";
                --tri3;
            }
            
            // 4th triangle print kar lete hai
            int tri4 = n - row + 1;
            while(tri4){
                cout << tri4 << " ";
                --tri4;
            }

            cout <<endl;
            ++row;
        }
    }
    return 0;
}