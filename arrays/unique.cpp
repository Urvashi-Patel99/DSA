#include <iostream>
using namespace std;

int unique(int arr[],int size){
  int ans = 0;
  for(int i=0;i<size;i++){
    ans = ans^arr[i];
  }
  return ans;
}


int main()
{

  int arr[9] = {2,3,4,2,3,4,5,6,6};

  
  int answer= unique(arr,9);
  cout<<answer;
  
  return 0;
}