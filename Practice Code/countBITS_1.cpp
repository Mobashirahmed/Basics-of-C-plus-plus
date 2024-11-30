#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n ; // assign a binary value to it.
    int count = 0;
    while(n != 0){
        
        // check last bit
        if(n & 1){
            ++count;
        }
        n >>= 1;
    }
}