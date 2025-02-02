#include<iostream>
using namespace std;

int main(){
    // Declaring oneLakhArray
    int oneLakhArray [100000];
    // initialing all of its elements to '0'
    oneLakhArray[100000] = {0};
    cout << oneLakhArray[23] <<endl;
    cout << oneLakhArray[5321] <<endl;
    cout << oneLakhArray[78003] <<endl;
    cout <<endl;

    /*
    Can we initialize all of its elements to some constant in a similar fashion?
    oneLakhArray[100000] = {34};
    cout << oneLakhArray[43027] <<endl;
    cout << oneLakhArray[1302] <<endl;
    cout << oneLakhArray[0] <<endl; // Its first most element
    cout <<endl;

    Output:
    0
    0
    0
    
    */
   // Note: I've also checked the output on commenting its null initialisation, and it still gives the same. May this could be some other way of its initialisation to null.

    /*
    lets do one more thing
    //    oneLakhArray[100000] = {};
    //    cout << oneLakhArray[56] <<endl; 
    //    cout << oneLakhArray[34091] <<endl; 
    //    cout << oneLakhArray[0] <<endl;
    //    cout <<endl;

    Output:
    0
    0
    0

    */

   // Homework solution
   // using Iteration for initialisation
   // your constant
   int constant;
   cin >> constant;
        for(int i = 0; i<100000; ++i){
            oneLakhArray[i] = constant; 
        }
    cout <<endl;
    cout << oneLakhArray[0] <<endl;
    cout << oneLakhArray[85604] <<endl;
    cout << oneLakhArray[63] <<endl;
    cout <<endl;
    /*
    Output:
    Same_as_value_Stored_in_constant
    Same_as_value_Stored_in_constant
    Same_as_value_Stored_in_constant

    */
}