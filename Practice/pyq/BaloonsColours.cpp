#include<bits/stdc++.h>
using namespace std;

int fun(char arr[],int n){
  char ans = '\0';
  unordered_map<char,int> mp;
  for(int i = 0; i<n; i++){
    mp[arr[i]]++;
  }
  for(int i =0; i<n; i++){
    if(mp[arr[i]]%2!=0){
      ans = arr[i];
      break;
    }
  }
  return ans;
}

int main(){
  int n;
  cin>>n;
  char arr[n];
  for(int i = 0; i<n; i++){
    cin>>arr[i];
  }
  char ans = fun(arr,n);
  if(ans=='\0'){
    cout<<"All are even";
  }else{
    cout<<ans;
  }
}