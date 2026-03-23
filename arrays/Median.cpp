//Median of two sorted array

#include<iostream>
using namespace std;

void merge(int arr[],int n){
  int sum = 0;
  for(int i=0;i<n;i++){
   sum = sum+arr[i];
  }
  cout<<"The sum of arr is"<<sum<<endl;

  
}
void sum(int arr[],int n){
  int sum = 0;
  for(int i=0;i<n;i++){
    sum = sum+arr[i];
  
  }
}

int main(){

  int arr[2]={1,3};
  int arr2[1]={2};
  merge(arr,2);
  merge(arr2,1);
  
  
  return 0;
}