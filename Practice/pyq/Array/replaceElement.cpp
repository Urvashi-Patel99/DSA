#include<bits/stdc++.h>
using namespace std;
int replace(vector<int>& arr, int n){
  vector<int> sortedArr= arr;
  sort(sortedArr.begin(),sortedArr.end());
  unordered_map<int,int> rankmap;

  int rank = 1;
  for(int num:sortedArr){
    if(rankmap.find(num) == rankmap.end()){
      rankmap[num]=rank;
      rank++;
    }
  }

  vector<int> result;
  for(int num:arr){
    result.push_back(rankmap[num]);
  }
  for(int x:result){
    cout<<x<<" ";
   }
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
   replace(arr,n);
   
  return 0;
}