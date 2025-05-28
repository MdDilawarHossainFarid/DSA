
#include<iostream>
using namespace std;

int main(){
    int arr[] = {7,6,5,4,3,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 1; i < n; i++){
        int current = i;
        int previous = i - 1;
        // cout <<  "current  " << current << ": " << arr[current]<< "  " << "previous " << previous << ": " << arr[previous]<<endl;
    while(previous >= 0 && arr[previous] > current){
        arr[previous + 1] = arr[previous];
        previous--;
    }
    arr[previous + 1] = current;
    }
 

}