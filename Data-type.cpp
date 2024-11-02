#include<iostream>   // Include the standard input-output stream library
using namespace std;  // Use the standard namespace to avoid prefixing with std::

int main(){
    // Declare and initialize an integer variable 'a' with value 261
    int a = 261;
    cout << a << endl;  // Output the value of 'a'

    // Declare and initialize an unsigned integer variable 'ui' with value 4586
    unsigned int ui = 4586;
    cout << ui << endl;  // Output the value of 'ui'

    // Declare and initialize a character variable 'b' with the character 'v'
    char b = 'v';
    cout << b << endl;  // Output the value of 'b'

    // Declare and initialize a character variable 'c' with a multi-character constant 'vs'
    // This line will likely cause a warning or unexpected behavior, as 'vs' is not valid for a single char variable
    char c = 'vs';
    cout << c << endl;  // Output the value of 'c'

    // Declare and initialize an integer variable 'i' with the ASCII value of character 'a'
    int i = 'a';
    cout << i << endl;  // Output the ASCII value of 'a' (expected output: 97)

    // Declare and initialize a character variable 'ch' with an integer value 100
    // The integer 100 is implicitly cast to the corresponding ASCII character 'd'
    char ch = 100;
    cout << ch << endl;  // Output the character corresponding to ASCII value 100

    // Declare and initialize a character variable 'ch1' with a large integer value
    // This may cause an overflow and result in an unexpected character output
    char ch1 = 123456;
    cout << ch1 << endl;  // Output the character resulting from overflow

    // Declare and initialize a boolean variable 'bl' with value true
    bool bl = true;
    cout << bl << endl;  // Output the boolean value (expected output: 1 for true)

    // Declare and initialize a float variable 'f' with value 1.2
    float f = 1.2;
    cout << f << endl;  // Output the value of 'f'

    // Declare and initialize a double variable 'd' with value 2.365
    double d = 2.365;
    cout << d << endl;  // Output the value of 'd'

    // Output a message about checking memory size of various data types
    cout << "Now let us see the Memory size occupied by various Data-types" << endl;

    // Calculate and output the size of integer data type
    int size_int = sizeof(a);
    cout << "Size of int data-type is: " << size_int << " bytes" << endl;

    // Calculate and output the size of character data type
    int size_char = sizeof(b);
    cout << "Size of char data-type is: " << size_char << " byte" << endl;

    // Calculate and output the size of boolean data type
    int size_bool = sizeof(bl);
    cout << "Size of bool data-type is: " << size_bool << " byte" << endl;

    // Calculate and output the size of float data type
    int size_float = sizeof(f);
    cout << "Size of float data-type is: " << size_float << " bytes" << endl;

    // Calculate and output the size of double data type
    int size_double = sizeof(d);
    cout << "Size of double data-type is: " << size_double << " bytes" << endl;

    return 0;  // Indicate successful program termination
}
