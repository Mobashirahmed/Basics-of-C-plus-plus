#include<iostream>
using namespace std;

int fib_nthTerm (int);

int main(){
    int n;
    cout << " Enter the value of n: ";
    cin >> n;
    
    int nthTerm = 0; // output '0' => Invalid Input OR values less than or equal to 0

    for ( int i = 0; i < n; ++i ){
        nthTerm = fib_nthTerm(i);
    }
    cout << " nth Fibonacci Term: " << nthTerm;
}

int fib_nthTerm (int n){
    if ( n == 0 || n == 1){
        return 1;
    }
    else{
        return ( fib_nthTerm(n-1) + fib_nthTerm(n-2) ); // recursion
    }
}