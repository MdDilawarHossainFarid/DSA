
// Largest Element in Array
#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 8, 7, 56, 90,10};
    int largestEle = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i <= n - 1; i++){
        if(largestEle<arr[i]){
            largestEle = arr[i];
        }
    }
    cout << largestEle;
}