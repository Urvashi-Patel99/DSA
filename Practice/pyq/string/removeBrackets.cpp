#include<bits/stdc++.h>
using namespace std;

string removeBrackets(string s){
  string result = "";
  for(char ch: s){
    if(ch=='('|| ch==')'){
      continue;
    }
    result +=ch;
  }
  return result;
}

int main(){
  string s;
  getline(cin,s);
  cout<<"Original string: "<<s<<endl;
  cout<<"After removing brackets: "<<removeBrackets(s)<<endl;
  return 0;
}