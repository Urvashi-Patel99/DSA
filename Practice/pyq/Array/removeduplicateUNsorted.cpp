#include<bits/stdc++.h>
using namespace std;
int removeDuplicate(vector<int>& arr){
  unordered_map<int,bool> seen;
  vector<int> result;
  for(int val:arr){
    if(!seen[val]){
      result.push_back(val);
      seen[val]=true;

    }
    
  }
  return 0;
}

int main(){
vector<int> arr = {4,5,4,2,2,3,1};
   vector<int> result=removeDuplicate(arr);
 cout<<"Array after removing duplicates";
 for(int a:arr){
  cout<<a<<" ";
 }




  return 0;
}