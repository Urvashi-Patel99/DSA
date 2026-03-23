#include<bits/stdc++.h>
using namespace std;

float avgarray( vector<int>& arr,int n){
  float sum=0;
  for(int i =0;i<n;i++){
    sum = sum+arr[i];
  }
  return sum/n;
  
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
    
   float sum = avgarray(arr,n);
   cout<<sum;
  
  return 0;
}