#include<iostream>
using namespace std;

int main(){
    int a = 1;
    int b = 2;

    if(a-- > 0 || ++b > 2){             // 0, a = 1 > 0,i.e; TRUE. Hence, by short ckt evaluation: The If block is true and hence it will execute.
        cout << "Stage1 -Inside If " <<endl;
    }
    else{
        cout << "Stage2 - Inside else <<endl";
    }
    cout << a << " " << b <<endl;       // a = 0, b = 2 Since pre-increment of b has never performed
}