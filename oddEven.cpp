#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
    int size = sizeof(arr) / sizeof(arr[0]);
    int even = 0;
    int odd = 0;
    for(int i = 0; i <= size - 1; i++){
        if(arr[i] % 2 == 0){
            even++;
        }else{
            odd++;
        }
    }
    cout << even << " " << odd;
}