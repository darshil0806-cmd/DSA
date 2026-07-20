#include <iostream>
using namespace std;
int main()
{   
    int n = 7;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
    }
    cout << "sum of odd numbers from 1 to " << n << " is " << sum << endl;
    return 0;
}