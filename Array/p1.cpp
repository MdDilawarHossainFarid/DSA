
// Decrement Array values by 1

#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i <= n - 1; i++){
        cout << arr[i] - 1;
    }
}