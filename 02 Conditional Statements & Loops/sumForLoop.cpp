#include <iostream>
using namespace std;
int main()
{   int n;
    cout << "enter the number till which you need to find sum =" << endl;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "sum of numbers from 1 to " << n << " is " << sum << endl;
    return 0;
}