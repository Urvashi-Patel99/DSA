#include<bits/stdc++.h>
using namespace std;
//time complexity is o(logN+1)

int palindrome(int n){
  int revNum= 0;
  int dup = n;
  while(n>0){
    
    int digit = n%10;
    revNum = (revNum*10)+digit;
    n= n/10;
  }
  if(dup==revNum){
    return true;
  }else{
    return false;
  }
}

int main(){
  int n;
  cin>>n;
  if(palindrome(n)){
    cout<<n<<" is a palindrome."<<endl;
  }else{
    cout<<n<<" is not a palindrome."<<endl;
  }
  return 0;
}