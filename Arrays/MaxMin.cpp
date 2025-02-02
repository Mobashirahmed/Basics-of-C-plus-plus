#include<iostream>
#include<climits>
using namespace std;

int getMin(int num[], int n){
    
    int mini = INT_MAX;

    for(int i = 0; i<n; i++){

        mini = min(mini, num[i]);

        // if(num[i] > min){
        //     mini = num[i]; // updating mini
        // }
    }

    // returning min value
    return mini;

}

int getMax(int num[], int n){
    
    int maxi = INT_MIN;

    for(int i = 0; i<n; i++){
        
        maxi = max(maxi, num[i]);

        // if(num[i] > maxi){
        //     maxi = num[i]; // updating maxi
        // }
    }

    // returning max value
    return maxi;

}

int main(){

    int size;
    cin >> size;

    // int num[size]; GHATIYA practice

    int num[10000]; // better practice , although it allocates mor no. of spaces in the memory
    
    // taking input array
    for(int i = 0; i<size; i++){
        cin >> num[i];
    }

    cout << " Maximum value is " << getMax(num, size) <<endl; 
    cout << " Minimum value is " << getMin(num, size) <<endl; 

    return 0;
}