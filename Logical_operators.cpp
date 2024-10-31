#include<iostream>
using namespace std;

int main(){
    int A = 98;
    int B = 0;
    int C = 3;

    int and1 = A && B ;
    // cout << "On taking AND of "<< A << " and " << C << " is: " << A&&C;
    cout << and1 <<endl;
    int and2 = A && C ;
    cout << and2 <<endl;
    int or1 = A || B ;
    cout << or1 <<endl;
    int or2 = A || C ;
    cout << or2 <<endl;
    cout << !A <<endl;
    cout << !B <<endl;
}