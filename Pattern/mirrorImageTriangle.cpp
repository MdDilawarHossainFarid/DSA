
#include<iostream>
using namespace std;

int main(){
    for(int i = 1; i <= 7; i++){
        int value = 0;
        if(i <= 4){
            value = i - 1;
             for(int k = 1; k <= value; k++){
            cout << " ";
        }
        } else{
             value = 7 - i;
             for(int k = 1; k <= value; k++){
            cout << " ";
        }
        }
        
        int condi = 0; 
        if( i <= 4 ){
            condi = i;
        }else{
            condi = ((7 - i )+ 1);
        }
        for(int j = condi; j <= 4; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}