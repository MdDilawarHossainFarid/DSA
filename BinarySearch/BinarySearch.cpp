#include<iostream>
using namespace std;

int display(int arr[], int n, int element){

int start = 0;

int end = n - 1;

while(start <= end){

     int mid = start + (end - start) / 2;

     if(arr[mid] == element){

         return mid;

     } else if(arr[mid] > element){

        end = mid - 1;

     }
     else{

        start = mid + 1;
           
     }


}
return -1;
}

int main(){
    
    int arr2[4] = {10,20,30,40};
    
    int size =   sizeof(arr2) / sizeof(arr2[0]);
   
    int element = 40;

    cout << display(arr2,size,element);

    return 0;
}