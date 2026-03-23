#include<bits/stdc++.h>
using namespace std;
int largestNumber(vector<int>& arr, int n){
  int max = arr[0];
  for(int i = 0 ;i <n; i++){
    if(max<arr[i]){
      max=arr[i];
    }
  }
  return max;
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
int max = largestNumber(arr,n);
cout<<"the largest number is:"<<max<<endl;

  return 0;
}