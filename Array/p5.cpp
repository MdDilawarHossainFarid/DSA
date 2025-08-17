
// Average
//  You need to return the floor value of average of the non negative integers.

#include<iostream>
#include <cmath>
using namespace std;

int main(){
    int arr[] = {-12, 8, -7, 6, 12, -9, 14};
    int sum = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i <= n - 1; i++){
        sum += arr[i];
    }
    int average = sum / n;
// cout << floor(sum);
// cout << average;
 cout << floor(sum);
}
