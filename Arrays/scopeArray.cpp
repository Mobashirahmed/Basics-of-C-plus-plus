#include<iostream>
using namespace std;

void Update( int arr[], int size){
    cout << "Inside the Fuction" <<endl;
    
    
    for(int i=0; i<size; ++i){
        cout << arr[i] << " ";
    }

    // updating an element of the array
    arr[3] = 37;

    cout << endl << "Going back to main Function" <<endl;
}
int main(){

    int exArray[7] = {2, 5, 1, 7, 12, 41, 9};

    Update(exArray, 7); // calling the function ; here the name of the array act as the reference. Hence its a call by reference. i.e; the name of the array also act as a pointer pointing to the first element of the array 

    for(int i = 0; i<7; i++){
        cout << exArray[i] << " ";
    }
}