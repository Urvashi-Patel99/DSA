#include<bits/stdc++.h>
using namespace std;

int add(vector<int>& arr,int n,int pos){
  arr.insert(arr.begin()+pos,n);
  
  for(int a:arr){
    cout<<a<<" ";
  }

}

int main(){
  int n;
  cin>>n;
  int pos=2;
  vector<int> arr;
  for(int i = 0;i<n;i++){
    int num;
    cin>>num;
    arr.push_back(num);

  }
   add(arr,n,pos);
  

  return 0;
}