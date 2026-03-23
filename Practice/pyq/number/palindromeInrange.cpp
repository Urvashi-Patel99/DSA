#include<bits/stdc++.h>
using namespace std;
//o(n)
int ispalindrome(int n){
  int reverse = 0;
  int temp = n;
  while(temp>0){
    reverse = (reverse*10)+temp%10;
    temp = temp/10;
  }
  return(n==reverse);
}

int main(){
 int min = 100;
 int max = 150;
 for(int i = min; i<=max; i++){
  if(ispalindrome(i)){
    cout<<i<<endl;
  }
 }

  return 0;
}