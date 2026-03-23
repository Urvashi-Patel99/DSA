#include <iostream>
using namespace std;

//something went wrong

void intersection(int arr[], int n,int arr1[],int m)
{

  int i =0;
  int j=0;
  while(i<n && j<m){
    
    if(arr[i]==arr[j]){
       cout<<arr[i]<<" ";
       i++;
       j++;
    }else if(arr[i]<arr[j]){
      i++;
    }else{
      j++;
    }
  }
  

}

int main()
{

  int even[8] = {2, 3, 4, 5, 6, 7, 8, 9};
  int odd[5] = {3, 49, 53, 36, 37};
   intersection(even, 8 , odd,5);
   
   
  
  return 0;
}
