#include<iostream>
using namespace std;

void printArray(int arr[],int size){
  cout<<"Printing the array:";
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" "<<endl;
  }
  
}


int main(){
  int first[5]={1,2,3,4,5};
  int second[10]={12,23,344,45,65,44,5,77,88,99};
  int third[15]={1,2,3,4,5,6,7,8,9,12,23,3,4,66,77};

  printArray(first,5);
  printArray(second,10);
  printArray(third,15);
  
  return 0;

}