#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
    int size = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i <= size; i++){
        if(arr[i] % 1 == 0 && arr[i] % arr[i] == 0){
            cout << arr[i] << endl;
        }
    }
}