#include <iostream>
using namespace std;

int duplicate(int arr[],int size){
  int ans = 0;
  //XOR ing all the elements
  for(int i=0;i<size;i++){
    ans = ans^arr[i];
  }
  //XOR 1 to n-1
  for(int i = 1;i<size;i++){
    ans= ans^i;
  }
  return ans;
}


int main()
{

  int arr[9] = {1,2,3,4,5,6,7,8,3};

  
  int answer= duplicate(arr,9);
  cout<<answer;
  
  return 0;
}