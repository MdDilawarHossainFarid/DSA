
#include<iostream>
using namespace std;

int main(){
    for(int i = 1; i <= 4; i++){
        if(i == 3){
            for(int j = 1; j <= i; j++){
                if(j == 2){
                    cout << " ";
                }else{
                    cout << "*";
                }
            }
        }else{
            for(int j = 1; j <= i; j++){
                cout<< "*";
            }
        }
        cout << endl;
    }
}