#include<iostream>   // Include standard input-output stream library
using namespace std;  // Use the standard namespace to avoid prefixing with std::

int main(){
    int A = 98;    // Initialize integer variable 'A' with a non-zero value (98)
    int B = 0;     // Initialize integer variable 'B' with zero (interpreted as false in logical operations)
    int C = 3;     // Initialize integer variable 'C' with a non-zero value (3)

    // Logical AND operation: Check if both 'A' and 'B' are non-zero (true)
    int and1 = A && B;
    cout << and1 << endl;  // Output the result of 'A && B'; expected output: 0 (false, as B is 0)

    // Logical AND operation: Check if both 'A' and 'C' are non-zero (true)
    int and2 = A && C;
    cout << and2 << endl;  // Output the result of 'A && C'; expected output: 1 (true, as both A and C are non-zero)

    // Logical OR operation: Check if either 'A' or 'B' is non-zero (true)
    int or1 = A || B;
    cout << or1 << endl;   // Output the result of 'A || B'; expected output: 1 (true, as A is non-zero)

    // Logical OR operation: Check if either 'A' or 'C' is non-zero (true)
    int or2 = A || C;
    cout << or2 << endl;   // Output the result of 'A || C'; expected output: 1 (true, as both A and C are non-zero)

    // Logical NOT operation: Check if 'A' is zero (false)
    cout << !A << endl;    // Output the result of '!A'; expected output: 0 (false, as A is non-zero)

    // Logical NOT operation: Check if 'B' is zero (true)
    cout << !B << endl;    // Output the result of '!B'; expected output: 1 (true, as B is zero)

    return 0;  // Indicate successful program termination
}
