#include<iostream>
using namespace std;

void printCounting(int);

int main(){
    
    int n;
    cout << " Enter the value of n: ";
    cin >> n;
    // function call
    printCounting(n);
    return 0;

}

void printCounting(int num){
    // cout << n <<endl; // yaha pe n ko print nahi kar sakte hai
    cout << " Your req. counting:" <<endl;
    for(int i = 1; i <= num; ++i){
        cout << " " << i << " ";
    }
    cout <<endl;

}