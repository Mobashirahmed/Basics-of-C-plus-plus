#include<iostream>
using namespace std;

// while setting arrays as parameter you can do either mention the size of the array OR you can leave it empty [].
// listing array as a parameter, in this manner: array_Name[] is most prefereble 
// listing array as a parameter, in this manner: array_Name[size_of_array] is not generally prefereble 
void printArray(int arr[], int size){

    cout << " printing the array " << endl;
    // print the array
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << " printing DONE " <<endl;
}

int main(){


    // declare
    int number[15];

    //accessing an array
    cout << "Value at 1 index " << number[1] <<endl;

    cout << "Value at 11 index " << number[14] <<endl;

    // cout << "Value at 20 index " << number[20] <<endl; // this will give you error

    //initializing array
    int second[3]  = {5, 7, 11};

    //accessing an element
    cout << "Value at 2 index " << second[2] <<endl;

    int third[15] = {2, 7};

    int n = 15;
    // cout << " printing the array " << endl;
    // // print the array
    // for(int i = 0; i<n; i++){
    //     cout << third[i] << " ";
    // }
    printArray(third, 15);

    int sizeThird = sizeof(third) / sizeof(int);
    cout << "size of third is " << sizeThird <<endl;

    // initializing all locations with 0
    int forth[10] = {0};
    
    n = 10;
    // cout << " printing the array " << endl;
    // // print the array
    // for(int i = 0; i<n; i++){
    //     cout << forth[i] << " ";
    // }
    printArray(forth, 10);
    
    int sizeForth = sizeof(forth) / sizeof(int);
    cout << "size of forth is " << sizeForth <<endl;

    // initializing all locations with 1 [not possible with below line]
    int fifth[10] = {1};
    
    n = 10;
    // cout << " printing the array " << endl;
    // // print the array
    // for(int i = 0; i<n; i++){
    //     cout << fifth[i] << " ";
    // }
    printArray(fifth, 10);

    int sizeFifth = sizeof(fifth) / sizeof(int);
    cout << "size of fifith is " << sizeFifth <<endl;

    char ch[5] = {'a', 'b', 'c', 'r', 'p'};
    // cout << ch[3] <<endl;

    cout << " printing the array " << endl;
    // print the array
    for(int i = 0; i<n; i++){
        cout << ch[i] << " ";
    }
    cout << "printing DONE " <<endl;

    cout << endl << " Everything is Fine " << endl << endl;

    return 0;
}