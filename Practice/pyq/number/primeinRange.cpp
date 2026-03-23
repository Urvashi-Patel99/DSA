#include<bits/stdc++.h>
using namespace std;
int isPrime(int n){
  int cnt=0;
  for(int i = 0; i^2<=n;i++){
    if(n%i){
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
  int min = 2;
  int max = 50;
  for(int i = min; i<=max; i++){
    if(isPrime(i)){
      cout<<i<<"is prime "<<endl;

    }
    else{
      cout<<i<<"is not  prime "<<endl;

    }
  }
  return 0;

}