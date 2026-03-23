#include<iostream>
using namespace std;

string isPrime(int n){
  
  for(int i = 2; i*i<=n; i++){
    if(n%i==0){
      cout<<"Non Prime";
    }
  }
  cout<<"Prime";
}

int main(){

  int n = 43;
  cout<<isPrime(n)<<endl;
  return 0;
}