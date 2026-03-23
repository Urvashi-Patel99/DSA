#include<iostream>
using namespace std;
  bool isEven(int a){
    if(a&1){
      return 0;//odd
    }else{
      return 1;//Even
    }
  }
    int main(){
      int num;
      cin>>num;

      if(isEven(num)){
        cout<<"number is even";
      }else{
        cout<<"number is odd";
      }
      return 0;
    }
  