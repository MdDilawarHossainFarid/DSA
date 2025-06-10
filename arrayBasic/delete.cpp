
#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    arr[5] = 9;
    arr[6] = 9;

    cout << size;
}