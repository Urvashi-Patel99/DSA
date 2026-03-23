#include<bits/stdc++.h>
using namespace std;

int median( vector<int>& arr,int n){
  sort(arr.begin(),arr.end());
  if(n%2==0){
    int ind1 = (n/2)-1;
    int ind2 = n/2;
    cout<<(double)(arr[ind1]+arr[ind2])/2;
  }else{
    cout<<arr[(n/2)];
  }
  
  
  
}

int main(){
  
  int n ;
  cin>>n;
  vector<int> arr;
  for(int i= 0; i<n; i++){
    int num;
    cin>>num;
    arr.push_back(num);
   
  }
    
   float med = median(arr,n);
   cout<<med;
  
  return 0;
}