#include <iostream>
using namespace std;
int sum(int a , int b){
    return a+b;
}
int main(){
    cout<<"Enter two numbers: ";
    int a,b;
    cin>>a>>b;
    cout<<"The sum of "<<a<<" and "<<b<<" is: "<<sum(a,b)<<endl;

return 0;
}