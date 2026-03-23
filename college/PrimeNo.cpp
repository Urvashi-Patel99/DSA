#include<iostream>
using namespace std;

bool isPrime( int num){
   for( int i = 2; i<100-1; i++){
    if((num%i==0)){

      return false;

    }else{
      return true;

    }
  }

}

int main(){
  int num;
  cout<<"Enter the number";
  cin>>num;
  isPrime(num);

  return 0;
}





