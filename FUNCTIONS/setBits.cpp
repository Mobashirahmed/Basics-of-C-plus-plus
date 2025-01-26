#include<iostream>
using namespace std;

int setBitsSum (int, int);

int main(){
    int a, b;
    cout << setBitsSum(a, b);
}

int setBitsSum (int x, int y){
    cout << " Enter the value of a: ";
    cin >> x;
    cout << " Enter the value of b: ";
    cin >> y;
    
    int setCount = 0;

    while ( x > 0 ){
        int bit = x & 1;
        if (bit && 1){
            setCount = setCount + 1;
        }
        x = x >> 1;
    }
    while ( y > 0 ){
        int bit = y & 1;
        if (bit && 1){
            setCount = setCount + 1;
        }
        y = y >> 1;
    }

    return setCount;
}