#include<iostream>
using namespace std;

int main(){
    for(int i = 1; i <= 5; i++){
        if(i == 1 || i == 5){
            for(int j = 1; j <= 5; j++){
                if(j == 1 || j == 5){
                    cout <<"* ";
                }else{
                    cout<<" ";
                }
            }
        }
        if(i == 2 || i == 4){
             for(int j = 1; j <= 5; j++){
                if(j == 2 || j == 4){
                    cout <<"* ";
                }else{
                    cout<<" ";
                }
            }
        }
         if(i == 3){
             for(int j = 1; j <= 5; j++){
                if(j == 3){
                    cout <<"* ";
                }else{
                    cout<<" ";
                }
            }
        }
        cout<< endl;
    }

}