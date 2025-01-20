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

    int x, y;
    cin >> x >> y;

    int ans = 1;
    for (int i = 1; i <= y; ++i)
    {
        ans = ans * x;
    }
    return ans;
}