#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
  cout << "printing the array" << endl;
  ;
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " " << endl;
  }
}

void sort(int arr[], int n)
{
  int i = 0, j = n - 1;
  while (i < j)
  {
    while (i < j)
    {
      if (arr[i] == 0)
      {
        i++;
      }

      else if (arr[j] == 1)
      {
        j--;
      }
      else
      {
        swap(arr[i], arr[j]);
        i++;
        j++;
      }
    }
  }
}

int main()
{

  int arr[5] = {6, 8, 4, 5, 7};

  sort(arr, 5);
  printArray(arr, 5);

  return 0;
}