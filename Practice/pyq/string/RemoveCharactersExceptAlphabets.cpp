#include<bits/stdc++.h>
using namespace std;
string removeCharacter(string s){
  string result = "";
  for(char ch:s){
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
      result +=ch;
    }
  }
  return result;
}

int main(){
string s;
getline(cin,s);
cout<<"Original string: "<<s<<endl;
cout<<"Filtered string :"<<removeCharacter(s)<<endl;

  return 0;
}