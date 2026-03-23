#include <iostream>
using namespace std;

void search(int arr[], int size, int key)
{
  for (int i = 0; i < size; i++)
  {

    if (arr[i] == key)
    {
      cout << "Key present";
    }
    else if (arr[i] > key)
    {
      key = key - 1;
    }else{
      key = key + 1;
    }
    
  }


     

}

int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int key;
  cout << "Enter the  key element " << endl;
  cin >> key;
  search(arr, 5, key);
  return 0;
}