#include<bits/stdc++.h>
using namespace std;

int sumarray( vector<int>& arr,int n){
  int sum=0;
  for(int i =0;i<n;i++){
    sum = sum+arr[i];
  }
  return sum;
  
}

int main(){
  
  int n ;
  cin>>n;
  vector<int> arr;
  for(int i= 0; i<n; i++){
    int num;
    cin>>num;
    arr.push_back(num);
   
  }
    
   int sum = sumarray(arr,n);
   cout<<sum;
  
  return 0;
}