/*
    To print the following pattern:
    A B C ..
    : : : ::
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int row = 1;
    char ch = 'A';
    
    while(row<=n){
        
        int col = 1;      
        while(col<=n){
            cout << ch << " ";
            
            ++ch;
            ++col;
        }
        cout <<endl;
        
        ++row;
    }
}