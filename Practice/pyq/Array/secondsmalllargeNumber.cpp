#include<bits/stdc++.h>
using namespace std;
int secondSmall(vector<int>& arr, int n){
  if(n<2){
    return -1;
  }
  int small = INT_MAX;
  int second_small = INT_MAX;

  for(int i = 0; i<n; i++){
    if(arr[i]<small){
      second_small = small;
      small= arr[i];
    }else if(arr[i]<second_small &&arr[i] !=small){
      second_small = arr[i];

    }

  } 
  return second_small;
}
int secondLarge(vector<int>& arr,int n){
  if(n<2){
    return -1;
  }
  int large = INT_MIN;
  int second_large = INT_MIN;
  for(int i=0; i<n; i++){
    if(arr[i]>large){
       second_large = large;
      large = arr[i];
    }else if(arr[i]>second_large && arr[i]!= large){
      second_large = arr[i];
    }
  }
  return second_large;
}

int main(){
  int n; cin>>n;
  vector<int> arr;
  for(int i = 0; i <n; i++){
    int num;
    cin>>num;
    arr.push_back(num);

  }
  int secSmall = secondSmall(arr, n);
  int secLarge = secondLarge(arr, n);
  cout<<"Second Smallest:"<<secSmall<<endl;
  cout<<"Second Largest:"<<secLarge<<endl;
  return 0;
}