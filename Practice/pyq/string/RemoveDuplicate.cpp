#include<bits/stdc++.h>
using namespace std;
//o(n) time
//o(n) space

string removeDuplicate(string s){
  bool seen[26] = {false};
  string result = "";
  for(char ch : s){
    if(!seen[ch-'a']){
      seen[ch-'a'] = true;
      result +=ch;
    }
  }
   return result;
}

int main(){

 string s;
 getline(cin,s);
 cout<<" Before All duplicates are not removed: "<<s<<endl;
 cout<<" After All duplicates are removed: "<<removeDuplicate(s);


  return 0;
}