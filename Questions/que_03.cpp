#include<iostream>
using namespace std;
int main(){
    int number = 3;
    cout << (25 * (++number) );     // first increse the value and then use it (pre-increment)
    /*
        25 * (number = number + 1)
        25 * (number = 3 + 1)
        25 * (number = 4)
        25 * 4
        100     OUTPUT
    */
}