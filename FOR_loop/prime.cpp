#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter a number " ;
    cin >> n;

    bool isPrime = 1;

    if (n>0){

        for (int i = 2; i < n; ++i){

            if(n % i == 0) // rem = 0, not a prime
                // cout << "Not a prime Number" <<endl;
                isPrime = 0;
                break;
        }
    
        if (isPrime == 0)
            cout << n << " is not a prime number";
        else
            cout << n << " is a prime number";
    }
    else {
        cout << "You've entered a non positive number" ;
    }
}