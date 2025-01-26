#include<iostream>
using namespace std;

int AP (int);

int main(){
    int n;
    cout << AP (n);
}

int AP (int n){
    cout << " Enter thr value of n: ";
    cin >> n;
    if ( n >= 1 ){
        int nth_term = (3 * n + 7);
        return nth_term;
    }
    else{
        cout << " Invalid value of n." <<endl;
        return 0;
    }
}