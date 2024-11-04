#include<iostream>
using namespace std;

int main(){
    int a;
    cin >> a;

    cout << "Value of n is " << a <<endl;
    // if a is positive
    if(a>0)
        cout << a << " is positive.";
    else
        cout << a << " is negative" <<endl;
}