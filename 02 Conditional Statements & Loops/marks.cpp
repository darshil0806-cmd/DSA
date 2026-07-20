#include<iostream>
using namespace std;
int main(){
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    if(marks>90){
        cout<<"a\n";
    }
    else if(marks>80){
        cout<<"b\n";
    }
    else if(marks>70){
        cout<<"c\n";
    }
    else if(marks>60){
        cout<<"d\n";
    }
    else{
        cout<<"f\n";
    }
    return 0;
}