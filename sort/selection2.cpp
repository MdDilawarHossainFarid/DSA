
#include<iostream>
using namespace std;

int main(){
    int arr[] = {10,5,8,20,2,18};
    int size = sizeof(arr)/sizeof(arr[0]);
    int mini_ind;
    for(int i = 0; i < size - 1; i++){
         mini_ind = i;
        for(int j = i + 1; j < size; j++){
            if(arr[j] < arr[mini_ind]){
                mini_ind = j;
        }
      
    }
    swap(arr[mini_ind],arr[i]);
}

    
    // for(int i = 0; i < size; i++){
    //     cout << arr[i] << " ";
    // }

}
