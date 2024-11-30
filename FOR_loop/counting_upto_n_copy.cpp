#include<iostream>
using namespace std;

int main(){

    int n;
    cout << " Enter the value of n ";
    cin >> n;
    cout << "Counting numbers upto n:" <<endl;

    int i = 1;
    for( ; ; ){
        if(i<=n)
            cout << "    " << i <<endl;
        else
            break;
            ++i;
    }
}