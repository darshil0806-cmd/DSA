#include <iostream>
#include <vector>
using namespace std;
int main()
{ 
    vector<int> vec1; // empty vector of integers
    vector<int> vec2(5); // vector of size 5 with default values (0 for int)
    vector<int> vec3(5, 10); // vector of size 5 with all elements initialized to 10
    vector<int> vec4(vec3); // vector initialized with the contents of vec3
    // by default, vector capacity is equal to size, but it can grow dynamically as elements are added
    cout << "Size of vec1: " << vec1.size() << endl;
    cout << "Size of vec2: " << vec2.size() << endl;
    cout << "Size of vec3: " << vec3.size() << endl;
    cout << "Size of vec4: " << vec4.size() << endl;
    cout << "Capacity of vec1: " << vec1.capacity() << endl;
    cout << "Capacity of vec2: " << vec2.capacity() << endl;
    cout << "Capacity of vec3: " << vec3.capacity() << endl;
    cout << "Capacity of vec4: " << vec4.capacity() << endl;
    vector<int> vec5;

    vec5.push_back(0);
    vec5.push_back(1);
    vec5.push_back(2);
    cout << "Size of vec5 after adding elements: " << vec5.size() << endl;
    cout << "Capacity of vec5 after adding elements: " << vec5.capacity() << endl;
    // default capacity = 4 and doubles when the size exceeds the capacity


    return 0;
}