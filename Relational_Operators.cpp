#include<iostream>   // Include the standard input-output stream library
using namespace std;  // Use the standard namespace to avoid prefixing std:: 

int main(){
    int a = 7;        // Initialize integer variable 'a' with a value of 7
    int b = 3;        // Initialize integer variable 'b' with a value of 3

    // Comparison: Check if 'a' is equal to 'b' and store the result in 'first'
    bool first = (a == b);
    cout << first << endl;  // Output the result of (a == b); expected output: 0 (false)

    // Comparison: Check if 'a' is greater than 'b' and store the result in 'second'
    bool second = (a > b);
    cout << second << endl;  // Output the result of (a > b); expected output: 1 (true)

    // Comparison: Check if 'a' is less than 'b' and store the result in 'third'
    bool third = (a < b);
    cout << third << endl;  // Output the result of (a < b); expected output: 0 (false)

    // Comparison: Check if 'a' is not equal to 'b' and store the result in 'fourth'
    bool fourth = (a != b);
    cout << fourth << endl;  // Output the result of (a != b); expected output: 1 (true)

    return 0;  // Indicate that the program ended successfully
}
