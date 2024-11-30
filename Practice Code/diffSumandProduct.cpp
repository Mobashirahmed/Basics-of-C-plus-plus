#include<iostream>
using namespace std;

long long int DiffOfSumAndProduct (long long int num);

int main(){
    long long int num;
    cout << "Enter a number ";
    cin >> num;
    cout << "Differece of product of its digits and sum of its digits " << DiffOfSumAndProduct(num) <<endl;
    return 0;
}

long long int DiffOfSumAndProduct (long long int num){
    long long int sum = 0;
    long long int product = 1;
    while (num !=0 ){
        int digit = num % 10;
        sum += digit; 
        product *= digit;
        num /= 10; 
    }
    long long int diff = product - sum;
    return diff; 
}