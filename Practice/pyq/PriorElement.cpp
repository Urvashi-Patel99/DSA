#include<bits\stdc++.h>
using namespace std;

void prior_ele(int arr[],int n){
  int count = 0;
  int maxi = 1;
  for(int i = 1; i<n; i++){
    if(maxi<arr[i]){
      arr[i]=maxi;
      count++;
    }
  }
  cout<<count;

}


int main(){
  int n ;
  cin>>n;
  int arr[n];
  for(int i = 0; i<n; i++){
    cin>>arr[i];
  }
  prior_ele(arr,n);
  
  
  return 0;

}