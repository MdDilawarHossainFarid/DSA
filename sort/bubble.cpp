#include<iostream>
using namespace std;

void bubble_sort(int arr[],int n){

   for(int i = n - 1 ; i >= 0; i--){

    bool isSwap = false;

    for(int j = 0; j <= i - 1; j++){
      
        if(arr[j] > arr[j + 1]){

            int temp = arr[j + 1];

            arr[j + 1] = arr[j];

            arr[j] = temp;

            isSwap = true;
        }

    }
    if(!isSwap){
        break;
    }
   }
   for(int i = 0; i < n ; i++){

            cout << arr[i] << " ";

        }
}



int main(){
        int n;

        cin >> n;

        int arr[n];

        for(int i = 0; i <= n - 1; i++){

            cin >> arr[i];

        }

        bubble_sort(arr,n);



    return 0;
}