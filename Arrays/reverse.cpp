#include<iostream>
using namespace std;

void reverse(int arr[], int n){

    int start = 0; //setting start to the initial index
    int end = n-1; // setting end to ending index

    // (start < end) is the working condition for the Iteration  
    while(start <= end){
        swap(arr[start], arr[end]); // swap function C++ ki library mein pre-defined hai
        start++; // moving start towards end
        end--; // moving end towards start
        
        // Above movements will led to a situation when (start > end) and in this scenario Iteration terminates 
    }
}

void printArray(int arr[], int n){

    for( int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout <<endl;
}

int main(){

    // initializing array
   int arr[6] = {1, 4, 0, 5, -2, 15};
   int brr[5] = {2, 6, 3, 9, 4};

    // reversing the elements
   reverse(arr, 6);
   reverse(brr, 5);

    // printing the Array
   printArray(arr, 6); 
   printArray(brr, 6); 
}