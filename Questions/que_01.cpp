#include <iostream>
using namespace std;

int main(){
    int a, b = 1;
    a = 10;
    if(++a)     // ++a => a = a + 1; => a = 10+1 = 11, i.e; a non-zero value. Hence the value in if blockk is TRUE, therefore it will execute.
        cout << b; // b = 1 will come out as our output
    else        // this block will never execute
        cout << ++b;
}