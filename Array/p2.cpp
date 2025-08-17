
// Array search

#include<iostream>
using namespace std;

int returnArrElemIndex(int arr[], int n){
  for(int i = 0; i <= n - 1; i++){
        if(arr[i] == 4){
            return i;
        }

    }
      return -1;
}


int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << returnArrElemIndex(arr,n);
}