#include <iostream>
using namespace std;

// write a code to convert the given numbers into words
//  input 438237764
//  output 438237764 into words

void NumberToWords()
{
  int arr[] = {4, 3, 8, 2, 3, 7, 7, 6, 4};
  for (int i = 0; i <= arr.size - 1; i++)
  {
    switch (arr[i])
    {
    case 0:
      cout << "zero";
      break;
    case 1:
      cout << "One";
      break;
    case 2:
      cout << "two";
      break;
    case 3:
      cout << "Three";
      break;
    case 4:
      cout << "four";
      break;
    case 5:
      cout << "five";
      break;
    case 6:
      cout << "six";
      break;
    case 7:
      cout << "seven";
      break;
    case 8:
      cout << "eight";
      break;
    case 9:
      cout << "nine";
      break;
    case 10:
      cout << "ten";
      break;
    }
  }
}

int main()
{
  return 0;
}
