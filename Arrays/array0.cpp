#include<iostream>
using namespace std;

int main(){
    // Declaring an array, say of type integer
    int num[15];
    // accessing elements
    cout << num[0] <<endl; // returns you garbage values
    cout << num[14] <<endl;
    cout << num[9] <<endl;
    cout <<endl;
    // Initialisation
    int arr[15] = {3, 5, 2, 87, 14, 62, 42, 17, 15, 37, 17, 23, 46, 81, 42};
    cout << arr[12] <<endl;
    cout << arr[9] <<endl;
    cout << arr[2] <<endl;
    cout <<endl;
    // Initializing its every elements to null
    num[15] = {0};
    cout << num[0] <<endl;
    cout << num[4] <<endl;
    cout << num[9] <<endl;
}