#include<iostream>
using namespace std;

int main(){
    int a, b;
    
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    char op;
    cout << "Tell us the operation you want to perform: ";
    cin >> op;

    switch( op ){
        case '+': cout << (a+b);
            break;
        case '-': cout << (a-b);
            break;
        case '*': cout << (a*b);
            break;
        case '/': cout << (a/b);
            break;
        case '%': cout << (a%b);
            break;
        default: cout << "Invalid operation" <<endl;
    }
    return 0;
}