// print a pattern
/*
    ***...*
    ***...*
    ***...*
    : : : :
    ***...* upto n ⨉ n
*/
#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    // int j = 1; // main global declaration. This causes issue in incrementing the value inside while 
    int i = 1;

    while(i<=n){
        
        int j = 1; // local declaration
        while(j<=n){
            cout << "* " ;
            ++j;
        }
        
        cout <<endl;
        ++i;
    }
}