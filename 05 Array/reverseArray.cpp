#include <iostream>
using namespace std;
void reverseArray(int arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}
int main()
{
    int marks[5] = {100, 20, 30, 40, 50};
    reverseArray(marks, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << marks[i] << " ";
    }
    return 0;
}
