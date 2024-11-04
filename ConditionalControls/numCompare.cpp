#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter two numbers" <<endl;
    cin >> a >> b;

    cout << "Value of a and b is " << a << " and " << b <<endl;

    if(a>b){
        cout << a <<" is greater.";
    }
    if(b>a){
        cout << b <<" is greater.";
    }
}