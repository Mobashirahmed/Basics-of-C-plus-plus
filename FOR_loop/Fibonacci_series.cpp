#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n ";
    cin >> n;

    unsigned long int a = 0;
    unsigned long int b = 1;

    cout << "Fibonacci Series: " <<endl;

    cout << "   " << a << ", " << b << ", ";

    for (int i = 3; i <= n; ++i){
        unsigned long long int fibNumber = a + b;
        cout << fibNumber << ", ";

        a = b;          // we must first update the value of a to b. Such that we can update the value of b to fibNumber. 
        b = fibNumber;
    }
}