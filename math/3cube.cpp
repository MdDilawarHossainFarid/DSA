
#include<iostream>
using namespace std;

int main(){
    int sum = 0;
    for(int i = 1; i <= 9; i++){
        sum +=  i*i*i;
    }
    cout <<" sum is : " <<sum;
}