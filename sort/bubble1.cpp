#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    int isSwap;
    for(int i = 0; i < n - 1; i++){
   
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j],arr[j +1]);
              
            }
        }
      
    }

    for(int i = 0; i < n; i++){
        cout << arr[i];
    }

}

int main(){
    int arr[] = {5,4,3,2,1};
    int size =  sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,size);
}
