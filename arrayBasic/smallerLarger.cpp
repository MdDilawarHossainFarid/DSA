
#include<iostream>
using namespace std;

int main(){
    int arr[7] = {1, 5, 8, 12, 12, 12, 19};
    int target = 12;
    int greater = 0;
    int less_or_equal  = 0;
    for(int i = 0; i < 7; i++ ){
        if(target < arr[i] || target == arr[i]) {
            less_or_equal++;
        }else{
            greater++;
        }
    }
    cout << less_or_equal << " , " <<greater;

}