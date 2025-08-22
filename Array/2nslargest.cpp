#include<iostream>
using namespace std;

int main(){
    int arr[] = {16,2,11,4,5,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int largest = 0;
    // int secondlargest = 0;
    for(int i = 0; i <= n - 1; i++){
        if(arr[i] > arr[i + 1]){
            largest = arr[i];
        }
    }
    //    for(int i = 0; i <= n - 1; i++){
    //     if(arr[i] < largest){
    //       secondlargest= arr[i];
    //     }
    // }
    cout<< largest;
}