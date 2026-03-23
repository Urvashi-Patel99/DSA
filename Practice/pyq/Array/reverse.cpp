#include<bits/stdc++.h>
using namespace std;
int reverse(vector<int>& arr, int n){
   int start = 0;
    int end = n-1;
  while(start<=end)
    {
      swap(arr[start], arr[end]);
      start++;
      end--;
   

  }
  return arr[n];
}

void print(vector<int>& arr, int n){
  for(int i = 0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int main(){
  int n;
  cin>>n;
  vector<int> arr;
  for(int i = 0; i<n; i++){
    int num;
    cin>>num;
    arr.push_back(num);

  }
  reverse(arr,n);
  print(arr,n);
   
  
  return 0;
}



