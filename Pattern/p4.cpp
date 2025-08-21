#include<iostream>
using namespace std;

int main(){
    for(int i = 1; i <= 4; i++){
        int toggle = 1;
        for(int j = 1; j <= i; j++){
            cout << toggle;
                    if(toggle){
                        toggle = 0;
                    }else{
                        toggle = 1;
                    }
          
        }

        cout << endl;
 
    }
}