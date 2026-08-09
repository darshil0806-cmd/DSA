#include <iostream>
using namespace std;
int main()
{
    cout << "Enter marks of 5 students: ";
    int marks[5] = {};
    cin >> marks[0] >> marks[1] >> marks[2] >> marks[3] >> marks[4];
    int smallest = marks[0];
    for (int i = 1; i < 5; i++)
    {
        if (marks[i] < smallest)
        {
            smallest = marks[i];
        }
    }
    cout << "Smallest mark: " << smallest << endl;
    return 0;
}