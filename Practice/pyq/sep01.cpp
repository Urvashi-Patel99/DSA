#include<bits/stdc++.h>
using namespace std;
 
int main(){
int n;
int j=0;
cin>>n;
int arr[n]={0};
for(int i = 0; i<n;i++){
  cin>>arr[j];
  if(arr[j]!=0){
    j++;
  }

}

for(int i = 0; i<n; i++){
  cout<<arr[i]<<" ";
}


  return 0;

}