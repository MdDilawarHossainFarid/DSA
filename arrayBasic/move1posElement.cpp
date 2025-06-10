
#include<iostream>
using namespace std;

int main(){
    int arr[5] = {5,10,20};
    int size = sizeof(arr) / sizeof(arr[0]);
    int pos = 2;
    int element = 7;
    // cout << size;
    int ind = pos - 1;
    cout << ind;
    // for(int i = size - 1; i >= ind; i--){
    //     // cout<< i << " : " << arr[i] << " ";
    //     arr[i + 1] = arr[i];
    //     // cout<< i << " : " << arr[i] << " ";
    // }
    // arr[ind] = element;
    // for(int i = 0; i <= size - 1; i++){
    // cout << arr[i] << " ";
    // }
}