// A C program to add all the numbers upto n

#include<iostream>
using namespace std;

int main(){
    int i = 1;
    int n;
    int sum = 0; // Key line I couldn't think of it at first
    cout << "Enter the value of n ";
    cin >> n;


    while(i <= n){
        sum += i;
        ++i;
    }
    cout << "Sum of n numbers is " << sum ;

}