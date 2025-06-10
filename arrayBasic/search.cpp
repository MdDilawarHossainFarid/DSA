
#include<iostream>
using namespace std;

int search(int arr[], int n, int x){
    for(int i = 0; i < n; i++){
        if(arr[i] == x){
          return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {99,33,22,8,66,1,3,5};
    int x;
    cin >> x;
    int n = sizeof(arr) / sizeof(arr[0]);
   int index = search(arr,n,x);
   cout << index;
}