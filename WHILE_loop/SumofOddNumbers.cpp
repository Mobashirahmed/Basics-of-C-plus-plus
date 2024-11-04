// To find the sum of Odd numbers upto n

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n ";
    cin >> n ;

    int i = 1;
    int sum = 0;

    while(i<=n){
        if(i%2==1){
            sum += i;
        }
        ++i;
    }

    cout << "Sum of " << n << " Odd numbers is " << sum ;
}