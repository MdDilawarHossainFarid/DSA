#include<iostream>
using namespace std;

int insert(int arr[],int n, int x,int cap,int pos){
    if(cap == n){
        return n;
    
    }
        int idx = pos - 1;
        // cout <<idx;
    for(int i = n - 1; i >= idx; i--){
        arr[i + 1] = arr[i];
    }
   for(int i = 0; i< 5; i++){
        cout <<arr[i]<<endl;
    }
    arr[idx] = x;
    cout<<"--------------------------"<<endl;
       for(int i = 0; i< 5; i++){
        cout <<arr[i]<<endl;
    }
}


int main(){
    int arr[5] , cap = 5, n = 3;
    int cap2 = sizeof(arr)/sizeof(arr[0]);
    arr[0] = 5; arr[1] = 10; arr[2] = 20;
    // for(int i = 0; i< 5; i++){
    //     cout <<arr[i]<<endl;
    // }
    int x = 7, pos = 2;
    n = insert(arr,n,x,cap,pos);
}

