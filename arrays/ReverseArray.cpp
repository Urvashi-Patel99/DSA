#include<iostream>
using namespace std;

void reverse(int arr[],int n){
  int start= 0;
  int end= n-1;
  while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
  }
}

void printArray(int arr[],int size){
  cout<<"printing the array"<<endl;;
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" "<<endl;
  }
}

int main(){

  int arr[5]={2,3,4,5,6};
  int brr[5]={6,5,4,3,2};

  reverse(arr,5);
  reverse(brr,5);

  printArray(arr,5);
  printArray(brr,5);



  return 0;
}