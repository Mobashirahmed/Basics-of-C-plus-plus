#include<iostream>
using namespace std;

bool isEven(int);

int main(){
    int num;
    cout << " Enter a number: ";
    cin >> num;
    
    if(isEven(num)){
        cout << " Number is Even.";
    }
    else{
        cout << " Number is Odd.";
    }
    return 0;

}

bool isEven(int n){
    //Odd
    if( n&1 ){
        return false;
    }
    // Even
    else{
        return true;
    }
}