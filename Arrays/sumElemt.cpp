#include<iostream>
using namespace std;

int sumElemt(int array[], int n){

    int sum = 0;
    for(int i = 0; i<n; ++i){
        sum += array[i];
    }

    return sum;
    
}

int main(){
    
    int size, arr[100];
    cin >> size;

    for(int i = 0; i<size; ++i){
        cin >> arr[i];
    }

    int ans = sumElemt(arr, size);
    cout << " Sum of its Elements: " << ans <<endl;

    return 0;
}