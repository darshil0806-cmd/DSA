#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "which value you need to find" << endl;
    cin >> n;
    int arr[5] = { 10, 20, 30, 40, 50 };
    bool found = false;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == n)
        {
            cout << "Value found at index " << i + 1 << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Value not found" << endl;
    }
    return 0;
}