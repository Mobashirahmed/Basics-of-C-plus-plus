#include<iostream>
using namespace std;

int fact(int);

int nCr(int, int);

int main(){
    int n, r;
    cout << " Enter the number of items; n: ";
    cin >> n;
    cout << " Enter the number of selections made; r: ";
    cin >> r;
    
    cout << " nCr: " << nCr(n, r);

    return 0;

}

int fact(int n){
    if( (n == 0) || (n == 1) ){
        return 1;
    }
    return ( n * fact(n-1) );
}

int nCr (int n, int r){
    if( r <= n ){
        int num = fact(n);
        int denum = fact(r) * fact(n-r);
        int nCr = num / denum;

        return nCr;
    }
    else {
        cout << " Invalid no. of Selections." <<endl;
        return 0;
    }
}