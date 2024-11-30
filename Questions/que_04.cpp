#include <iostream>
using namespace std;
int main(){
    int a = 1;
    int b = a++;        // post-increment : use the value and then increment the value, i.e; b = a; a = a + 1;
    int c = ++a;        // pre-increment : increase the value then use the value, i.e; c = a + 1; a = (a+1) OR a = c;
    cout << b << " " ;
    cout << c;
}