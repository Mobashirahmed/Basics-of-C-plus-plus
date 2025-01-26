#include<iostream>
// #include<math.h>
using namespace std;

int main(){
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;
    
    int ans = 0;
    int pow = 1;
    // int i = 0;
    
        while(n > 0){
            int bit = n & 1;
            ans += bit * pow;
            // ans += bit * pow(10, i);
            pow *= 10; // power of 10 ko iss tarah obtain kiya instead of using the pow() function of math.h header file.
            n = n >> 1;
            // i++;
        }

    cout <<"Answer is " << ans <<endl;
    return 0;
}
/*
    printing no. in forward flow:
    1. take a variable ans = 0
    2. take a variable digit to store the last digit of the number
    3. ans = (ans * 10) + digit
    printing no. in backward flow:
    1. take a variable ans = 0
    2. take a variable digit to store the last digit of the number
    3. ans = (digit * pow(10, i)) + ans
*/