#include <bits/stdc++.h>
using namespace std;
//o(n)

string removespaces(string s)
{

  string result = "";
  for (char ch : s)
  {
    char lower = tolower(ch);
    if (lower==' ')
    {
      continue;
    }
    result += ch;
  }

  cout << result << " ";
}

int main()
{
  string s;
  getline(cin, s);

  removespaces(s);

  return 0;
}