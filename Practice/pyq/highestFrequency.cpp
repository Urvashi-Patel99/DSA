#include<bits/stdc++.h>
using namespace std;
//given an array of integers arr[], sort the array according to the frequency of elements that is elements that have higher frequency comes first if the frequency of two elements are the same then the smaller number comes first.
//input= [2,2,3,3,1]
void countFrequency(vector<int>& arr){
  map<int,int>freq;

  for(int num: arr){
    freq[num]++;
  }
}

int main(){
  string n;
  getline(cin, n);
  
  
  if(n.front()=='[' && n.back()==']'){
    n = n.substr(1,n.length()-2);
  }
  stringstream ss(n);
  vector<int> arr;
  
  string temp;
  while(getline(ss,temp,',')){
    int num = stoi(temp);
    arr.push_back(num);

  }
  for(int a:arr){
    cout<<a<<" ";
  }


  return 0;
}