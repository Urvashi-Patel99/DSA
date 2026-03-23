#include <bits/stdc++.h>
using namespace std;

// given an integer as input and replace all the 0 with 5 in the integer.

int main()
{
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    if (arr[i] == 0)
    {
      arr[i] = 5;
    }
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i];
  }

  return 0;
}