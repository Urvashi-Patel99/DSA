#include<iostream>
using namespace std;


int factorial(int n){
  int fact = 1;
  for(int i = 1;i<=n;i++){
    fact = fact*i;
  }
  return fact;
}

int ncr(int n,int r){
  int num = factorial(n);
  int deno = factorial(r)*factorial(n-r);
  int ans = num/deno;
  return ans;
}


int main(){
  int n,r;
  cout<<"enter the value of n:";
  cin>>n;
  cout<<"enter the value of r :";
  cin>>r;
  int answer = ncr(n,r);
  cout<<"Answer is:"<<answer;
  return 0;
}