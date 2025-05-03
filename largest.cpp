#include<iostream>
using namespace std;

int main(){
    int arr[] ={1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << n;
    int lar = 1;
    for(int i = 0; i <= n- 1; i++){
        if(lar > arr[i]){
            lar = arr[i];
        }
    }
    cout << lar;
}