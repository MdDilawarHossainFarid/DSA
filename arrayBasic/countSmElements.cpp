
#include<iostream>
using namespace  std;

int main(){
    int n,x;
    cin >> n;
    cin >> x;
    int arr[n];
    for(int i = 0; i <= n - 1; i++){
        cin >> arr[i];
    }
    int count = 0;
     for(int i = 0; i <= n - 1; i++){
        if(arr[i] < x ){
            count++;
        }
        // cout << arr[i] << " , ";
    }
    cout <<count;


} 


