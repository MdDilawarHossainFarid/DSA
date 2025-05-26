
//  How do you access array elements in reverse order?

#include<iostream>
using namespace std;


int main(){
    int arr[] = {1,2,12,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);


    for(int i = n - 1; i >= 0; i--){
        cout << i << "->" <<arr[i] << endl;
    }
    
    for(int i = n - 1; i >= 0; i--){
      if(arr[i] == 6)cout << "Exists";
      }

      for(int i = 0 ; i < n; i++){
        if(i % 2 == 0 ){
            cout << arr[i] << " ";
        }
      }


}