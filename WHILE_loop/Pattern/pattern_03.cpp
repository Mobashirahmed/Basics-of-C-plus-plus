/* To print the below pattern:
    1 2 3 .. n
    1 2 3 .. n
    : : : :: :
    1 2 3 .. n
*/


#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 1;
    while(i<=n){

        int j = 1;
        while(j<=n){
            cout << j << " " ;
            ++j;
        }
        cout <<endl;
        ++i;
    }
}