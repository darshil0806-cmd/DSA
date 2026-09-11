#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> marks = {100, 20, 30, 40, 50};
    for (int i = 0; i < marks.size(); i++)
    {
        cout << marks[i] << " ";
    }
    cout << endl;

    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    cout << "Size of vector: " << vec.size() << endl;
    vec.pop_back();
    cout << "After popping back:" << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
    cout<< "vector at 1" << vec.at(1) << endl;

    return 0;
}