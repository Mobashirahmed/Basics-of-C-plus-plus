// To print numbers 1 to n\

#include<iostream>
using namespace std;

int main(){
    int n, i=1;
    cout << "Enter the value of n ";
    cin >> n ;
    cout << "List of numbers" <<endl;
    while(i<=n){
        cout << i << " " ;
        ++i;
    }
}