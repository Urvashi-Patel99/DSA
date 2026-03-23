#include<bits/stdc++.h>
using namespace std;

int nonrepeating(vector<int>& arr){
  unordered_map<int,int> mp;
  
  for(auto i:arr)
  ++mp[i];

  cout<<"The non-repeating elements are: ";
  for(auto i: mp){
    if(i.second==1){
      cout<<i.first<<" ";

    }
  }

}

int main(){
  string s;
  getline(cin,s);
  stringstream ss(s);
  vector<int> arr;
  string temp;
  while (getline(ss,temp,',')){
    int num= stoi(temp);
    arr.push_back(num);
  }
  nonrepeating(arr);
  
  return 0;

}