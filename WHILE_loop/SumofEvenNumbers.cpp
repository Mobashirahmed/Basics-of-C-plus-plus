// To find the sum of all even numbers upto n

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a value of n ";
    cin >> n ;

    int i = 1;
    int sum = 0;

    while(i<=n){
        if(i%2==0)
            sum += i;
        ++i;
    }

    cout << "Sum of Even numbers upto " << n << " is " << sum ;
}