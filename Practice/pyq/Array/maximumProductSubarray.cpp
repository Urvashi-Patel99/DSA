#include<bits/stdc++.h>
using namespace std;

int subarray(vector<int>& arr,int n){
  int pre = 1; int suf = 1;
  int ans = INT_MIN;
  
  for(int i =0; i<n;i++){
    if(pre ==0) pre = 1;
    if(suf==0) suf=1;

    pre = pre * arr[i];
    suf = suf * arr[n-i-1];
    ans = max(ans,max(pre,suf));
  }
  return ans;
}

int main(){

int n;
cin>>n;
vector<int> arr;
for(int i =0; i<n;i++){
  int num;
  cin>>num;
  arr.push_back(num);
}
int product = subarray(arr,n);
cout<<"the product is:"<<product<<endl;


  
  return 0;
}