#include<iostream>
using namespace std;

void selection(int arr[],int n){
    for(int i = 0; i < n - 2; i++){
        int mini = i;
        for(int j = i; j < n; j++){
            if(arr[j] < arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}


int main(){
    int n;
    
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    selection(arr, n);

        for(int i = 0; i < n; i++){
cout << arr[i];
    }


    return 0;
}