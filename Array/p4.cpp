
// Count the Zeros

#include<iostream>
using namespace std;

int main(){
    int arr[] = {0, 0, 0, 0, 0};
    int count = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i <= n - 1; i++){
        if(arr[i] == 0){
            count++;
        }
    }
    cout << count;
}