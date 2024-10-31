#include<iostream>
using namespace std;
int main(){
    int a =  261;
    cout<< a <<endl;
    unsigned int ui = 4586;
    cout << ui <<endl;

    char b = 'v';
    cout << b <<endl;
    char c = 'vs';
    cout << c <<endl;
    int i = 'a';
    cout << i <<endl;
    char ch = 100;
    cout << ch <<endl;
    char ch1 = 123456;
    cout << ch1 <<endl;

    bool bl = true;
    cout << bl <<endl;

    float f = 1.2;
    cout << f <<endl;

    double d = 2.365;
    cout << d <<endl;

    cout <<"Now let us see the Memmory size occupied by various Data-types"<<endl;
    int size_int = sizeof(a);
    cout <<"Size of int dat-type is: " << size_int << " bytes" <<endl;

    int size_char = sizeof(b);
    cout << "Size  of char data-type is:" << size_char << " byte" <<endl;

    int size_bool = sizeof(bl);
    cout << "Size of bool data-type is: " << size_bool << " byte" <<endl;

    int size_float = sizeof(f);
    cout << "Size of float data-type is: "<< size_float << " bytes" <<endl;

    int size_double = sizeof(d);
    cout << "Size of double data-type is: "<< size_double << " bytes" <<endl;
}