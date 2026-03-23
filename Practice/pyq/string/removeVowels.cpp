#include <bits/stdc++.h>
using namespace std;
//o(n)

string removeVowel(string s)
{

  string result = "";
  for (char ch : s)
  {
    char lower = tolower(ch);
    if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
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

  removeVowel(s);

  return 0;
}