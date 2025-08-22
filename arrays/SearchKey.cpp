#include<iostream>
using namespace std;

bool search(int arr[],int size, int key){
  for(int i=0;i<size;i++){
    if(arr[i]==key){
      return 1;
    }
  }
  return 0;
}

int main(){
int arr[10]={1,5,6,7,-5,8,9,4,3,2};
cout<<"Enter the element:";
int key;
cin>>key;
bool found = search(arr,10,key);
if(found){
  cout<<"key is present";
}else{
  cout<<"Key is absent";
}

  return 0;
}