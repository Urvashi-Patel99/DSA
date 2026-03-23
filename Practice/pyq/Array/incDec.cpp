#include<bits/stdc++.h>
using namespace std;
void incDec(vector<int>& arr,int n){
  sort(arr.begin(),arr.end());
  reverse(arr.begin()+n/2,arr.end());
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
  incDec(arr,n);
  for(int a: arr){
    cout<<a<<" ";
  }
  
  








  return 0;
}