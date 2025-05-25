
#include<iostream>
#include <algorithm>
using namespace std;

int main(){
    
    int arr[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < size - 1; i++){
        if(arr[i] > arr[i + 1]){
            swap(arr[i],arr[i + 1]);
        }
    }
    for(int i = 0; i < size ; i++){
        cout << arr[i];
    }
}