#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    cout << "Take a look at this Iteration" <<endl;
    int opt;
    cin >> opt;
    while( true ){
        switch (opt) {
            case 1:
                cout << "First Case" <<endl;
                // break;
            case 2:
                cout << "Selected 2nd case" <<endl;
                exit(0); // 0 indicates successful termination
            case 3:
                cout << "3rd case" <<endl; // leads to infinite loop
                break;
            default:
                cout << "Invalid option" <<endl;
                exit(1); // non-zero value indicates unsuccessful termination
        }
    }
}