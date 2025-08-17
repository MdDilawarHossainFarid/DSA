
#include<iostream>
using namespace std;


int main(){
for(int i = 1; i <= 4; i++){

    for(int a = 1; a <= 4 - i; a++){
        cout << " " <<" ";
    }
    
    for(int j = i; j>= 1; j--){
        cout << j << " ";
    }
    for(int k = 2; k <= i; k++){
        cout << k << " ";
    }

    cout << endl;
}
}
