#include<iostream>
using namespace std;

int countDigit(int x){
int result = 0;
while( x > 0){
    x = x / 10;
    result ++;
}

return result;
}

int main(){
int testCase;
cin >> testCase;
for(int i = 1; i<= testCase; i++){
    int number;
    cin >> number;
  cout << countDigit(number);
}


    return 0;
}