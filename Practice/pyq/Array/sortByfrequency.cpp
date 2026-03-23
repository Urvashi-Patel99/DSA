#include<bits/stdc++.h>
using namespace std;
//o(nlogn)
//o(n)

int sortByFreq(vector<int>& arr,int n){
  unordered_map<int,int> freq;
  for(int num: arr){
    freq[num]++;
  }

  auto cmp = [&](int a, int b){
    if(freq[a]!=freq[b])return freq[a]>freq[b];
    
    return a<b;
  };

  sort(arr.begin(),arr.end(),cmp);
  return 0;

  
}

int main(){

  int n ;
  cin>>n;
  vector<int> arr;
  for(int i =0;i<n;i++){
    int num;
    cin>>num;
    arr.push_back(num);

  }
  sortByFreq(arr,n);
  for(int num: arr){
    cout<<num<<" ";
  }
   
  return 0;
}