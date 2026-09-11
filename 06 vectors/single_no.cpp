// leet code 136
// bitwise XOR operation 
#include<iostream>
using namespace std;
int main(){
    
    int arr[5] = {1,2,3,4,1};
    int ans = 0;
    for(int i=0;i<5;i++){
        ans = ans ^ arr[i];
    }
    cout<<ans;

return 0;
}