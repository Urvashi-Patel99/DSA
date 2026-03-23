#include<bits/stdc++.h>
using namespace std;
int countFreq(vector<int>& arr,int n){
  
  unordered_map<int,int>mp;
  for(int i=0; i<n; i++){
    mp[arr[i]]++;
  }
  for(auto x: mp){
    cout<<x.first<<" "<<x.second<<endl;
  }
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
  countFreq(arr,n);
  return 0;
}