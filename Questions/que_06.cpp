#include<iostream>
using namespace std;

int main(){
    // This loop will not terminate
    for (int i = 0; i<=5; i--){
        cout << i << " ";
        i++;
    }
}