#include<iostream>
using namespace std;

bool ispal(int n){
int reverse = 0;
int temp = n;
while (temp != 0)
{
  int lastdigit = temp % 10;
  reverse = reverse * 10 + lastdigit;
  temp = temp /10;

}

  return reverse == n;

}


int main(){
    int number;
    cin >> number;

    cout <<ispal(number);
}