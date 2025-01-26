#include<iostream>
using namespace std;

bool isPrime(int);

int main(){
    int n;
    cout << " Enter a positive integer: ";
    cin >> n;

    if ( isPrime(n) ){
        cout << " " << n << " is a Prime number.";
    }
    else{
        cout << " " << n << " is not a Prime number."; // every negative integers can be factorised as a factor of -1
    }
    return 0;
}

bool isPrime(int n){
    if( (n==0) || (n==1) ){
        return false;
    }
    if( n > 1){
        for(int i= 2; i < n; i++){
            // divide ho gaya hai, not a prime no.
            if ( n%i == 0 ){
                return false; 
            }
        }
        // aur kisi se divide nahi hua toh, prime hai
        return true;
    }
    return false;
}