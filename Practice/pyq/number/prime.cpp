#include<bits/stdc++.h>
using namespace std;
//o(sqrt(N))
int isprime(int n){
  int cnt = 0;
  for(int i = 1; i*i<=n; i++){
    if(n%i==0){
      cnt++;
    } 
    if(n/i!=i){
      cnt++;
    }
  }
  if(cnt==2){
    return true;
  }else{
    return false;
  }
}

int main(){
  int n = 7;
  if(isprime(n)){
    cout<<n<<"is a prime";
  }else{
     cout<<n<<"is not a prime";
  }
  return 0;
}