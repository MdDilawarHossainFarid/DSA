
#include<iostream>
using namespace std;

int main(){
    for(int i = 1; i <= 4; i++){
        if(i == 2 || i == 3){
            for(int j = 1; j <= 4; j++){
                if(j == 1 || j == 4){
                    cout<< " * ";
                }else{
                    cout<< " 0 ";
                }
            }
        }else{
               for(int j = 1; j <= 4; j++){
            cout<< " * ";
        }
        }

      
        cout << endl;
    }
}