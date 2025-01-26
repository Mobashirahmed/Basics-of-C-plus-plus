#include <iostream>
using namespace std;

int power();

int main()
{

    cout << " answer is: " << power() << endl;

    cout << " answer is: " << power() << endl;

    cout << " answer is: " << power() << endl;

    return 0;
}

int power()
{
    // cout << a <<endl; is tarah se ek aise variable ko acess nahi kar sakte jo kisi aur function me initialized hai aur nah hi uski koi copy yahan pass ki gayi hai
    int x, y;
    cin >> x >> y;

    int ans = 1;
    for (int i = 1; i <= y; ++i)
    {
        ans = ans * x;
    }
    return ans;
}