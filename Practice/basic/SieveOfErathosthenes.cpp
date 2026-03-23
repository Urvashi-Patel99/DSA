// Updated version of prime number
#include <iostream>
#include <vector>
using namespace std;



int main()
{
  int n = 100;
  vector<bool> isPrime(n + 1, true);

  int count = 0;
  for (int i = 2; i < n; i++)
  {
    if (isPrime[i])
    {
      count++;
      for (int j = i * 2; j < n; j = j + i)
      {
        isPrime[j] = false;
      }
    }
  }
  cout << count;

  return 0;
}