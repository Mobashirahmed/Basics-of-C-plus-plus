#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout << "Enter a binary number: ";
    cin >> n;

    int i = 0, ans = 0;

    while( n != 0 ){
        int digit = n % 10;
        if( digit != 0 && digit != 1 ){
            cout << "Invalid binary number" <<endl;
        }
        else if( digit == 1 ){
            ans += pow(2, i);
        }
        n = n / 10;
        i++;    
    }
    cout << "Decimal number is: " << ans <<endl;
    return 0;
}