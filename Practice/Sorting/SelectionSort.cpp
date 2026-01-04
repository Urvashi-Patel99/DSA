#include<iostream>
using namespace std;

void SelectionSort(int arr[],int n){
  for(int i =0; i<n-1; i++){
    int smallInd = i;
    for(int j = i+1; j<n;j++){
      if(arr[j]<arr[smallInd]){
        smallInd = j;

      }
    }
    swap(arr[i],arr[smallInd]);
  }
}

void printArray(int arr[],int n){
  for(int i = 0; i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int main(){
  int n = 5;
  int arr[] = { 4,1,5,3,2};
  SelectionSort(arr,n);
  printArray(arr,n);
  return 0;
}