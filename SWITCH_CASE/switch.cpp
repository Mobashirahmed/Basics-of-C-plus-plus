#include <iostream>
using namespace std;

int main()
{
    int num = 2;
    cout << endl;
    switch (num)
    {
    case 1:
        cout << "This is your First case.";
        break; // break keyword used to exit the control from given block to the next statements below the block
    case 2:
        cout << "This is your second case.";
        break;
    default:
        cout << "This is your default.";
    }
    cout << endl;
    char opt = 'C';
    switch (opt)
    {
    case 'A':
        cout << "option A";
        break;
    case 'B':
        cout << "option B";
        break;
    case 'C':
        cout << "option C";
        break;
    case 'D':
        cout << "option D";
        break;
    default:
        cout << "none of them";
    }
    cout << endl;
    char ch = '3';
    switch (ch)
    {
    case 1:
        cout << "First case";
        break;
    case '2':
        cout << "character two";
        break;
    case 'C':
        cout << "'character C'";
        break;
    default:
        cout << "NONE";
    }
    cout << endl;
    int n = 2;
    int nest = 0;
    switch (n)
    {
    case 1:
        cout << "1st case";
        // break;
    case 2:
        switch (nest)
        {
        case 0:
            cout << "Value of n: " << n << endl;
            break;
        case 1:
            cout << "nest 1st case";
        }
        // break;
    case 3:
        cout << "Case 3 after selection of 2";
        break;
    default:
        cout << "DEFAULT";
    }
    cout << endl;
    return 0;
}