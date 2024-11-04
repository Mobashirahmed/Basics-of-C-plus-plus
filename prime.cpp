// To find a number is whether Prime or not

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number ";
    cin >> n;

    int i = 2;

    while(i<n){

        if(n%i == 0){
            cout << n << " is not a Prime number." <<endl;
        }
        else{
            cout << n << " is a Prime number." << endl;
        }

        i++;
    }

}
