#include<bits\stdc++.h>
using namespace std;
string isGoodNumber(int n){
  int sum =0;
  int temp= n;
  while(temp>0){
    sum+=temp %10;
    temp/=10;
  }
  if(sum !=0 && n%sum ==0){
    return "Good";
  }else{
  return "Bad";
  }
}
int main(){
  
    int n;
    cin>>n;
    cout<<isGoodNumber(n)<<endl;
  return 0;

 

}