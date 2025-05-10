#include<iostream>
using namespace std;

int main(){
    int k = 3;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start_idx = k - 1;
    int end_inx = n - k;
    swap(arr[start_idx],arr[end_inx]);
    // for(int i = 0; i <= n; i++){
    //     cout << arr[i] << endl;
    // }
cout << arr[start_idx] << " "  << arr[end_inx];
}
