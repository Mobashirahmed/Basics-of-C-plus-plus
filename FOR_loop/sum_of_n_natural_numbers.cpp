#include<iostream>
using namespace std;

int main(){

    unsigned long int n;
    cout << "Enter the value of n ";
    cin >> n;

    unsigned long long int sum = 0;
    unsigned long int count = 0;

    for (int i = 1; i <= n; ++i){
        sum += i;
        ++count;
    }

    cout << "Sum of " << n << " numbers = " << sum <<endl;
    cout << "Count = " << count ;
}