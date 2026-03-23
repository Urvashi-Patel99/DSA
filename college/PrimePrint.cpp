#include<iostream>
#include<cmath>
using namespace std;



bool isprime( int num){
  if(num<=1){
    return false;
  }
  for(int i = 2; i<=sqrt(num); i++){
  if(num%i==0){
    return false;
  }
  
}
return true;

}
bool isloop(){

  for(int i = 1;i<100;i++){
    if(isprime(i)){
      cout<<i;
    }
  }
}

int main(){
 isloop();
  return 0;
}
