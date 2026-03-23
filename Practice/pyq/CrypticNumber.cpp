#include <bits/stdc++.h>
using namespace std;

bool satisfiesConditions(int n){
  bool cond1 = (n%7==0);
  bool cond2 = (n%5!=0);
  string s = to_string(n);
  bool isPalindrome = (s[0]==s[1]);
  bool cond3 = !isPalindrome;.

  bool isNonRepeating = (s[0]== s[1]);
  bool cond4 = !isNonRepeating;
  return cond1 && cond2 && cond3 && cond4;
}

int main()
{
  int L, R;
  cin >> L >> R;
  
  bool found = false;
  for (int i = L; i <= R; i++)
  {
    if (satisfiesConditions(i))
    {
      cout << i <<" "<< "Satisfies the conditions" << endl;
      found = true;
    }
  }
  if (!found)
  {
    cout << "No numbers satisfy these conflicting conditions";
  }

  return 0;
}