/* To print the following pattern:
       1
      23
     456
    78910
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int num = 1;
    
    int row = 1;
    while(row<=n){
        
        //ab spaces print kar lete hai
        int space = n - row;
        while(space){
            cout << " ";
            --space;
        }

        //ab numbers ko printt kar lete hai
        int col = 1;
        while(col<=row){
            cout << num;
            ++num;
            ++col;
        }
        cout <<endl;
        ++row;
    }
}