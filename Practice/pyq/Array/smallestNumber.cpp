#include<bits/stdc++.h>
using namespace std;
int smallestNumber(vector<int>& arr, int n){
  int min = arr[0];
  for(int i=0;i<n;i++){
    if(min>arr[i]){
      min=arr[i];
    }
    
  }
  return min;
}

int main(){
  int n;
  cin>>n;
  vector<int> arr;
  
 for(int i=0; i<n;i++){
  int num;
  cin>>num;
  arr.push_back(num);
 }
 int min = smallestNumber(arr, n);
 cout<<"The smallest number is:"<<min<<endl;


  return 0;
}