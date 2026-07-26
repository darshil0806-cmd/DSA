#include <iostream>
using namespace std;
int minOfTwo(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    cout << "Enter two numbers: ";
    int a, b;
    cin >> a >> b;
    cout << "The minimum of " << a << " and " << b << " is: " << minOfTwo(a, b) << endl;
    return 0;
}