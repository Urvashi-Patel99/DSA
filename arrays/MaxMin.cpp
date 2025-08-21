#include<iostream>
using namespace std;

int getMax(int num[],int n){
  int max = INT32_MIN;
  for(int i = 0;i<n;i++){
    if(num[i]>max){
      max=num[i];
    }
  }
  return max;

}
int getMin(int num[],int n){
  int min = INT32_MAX;
  for(int i = 0;i<n;i++){
    if(num[i]<min){
      min=num[i];
    }
  }
  return min;

}

int main(){
  
  int num[10];
  cout<<"input the array elements";
  for(int i=0;i<10;i++){
  
    cin>>num[i];
  }
  cout<<"Max is:"<<getMax(num,10)<<endl;
  cout<<"Min is:"<<getMin(num,10)<<endl;
  return 0;
}