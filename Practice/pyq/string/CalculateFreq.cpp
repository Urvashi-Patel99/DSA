#include<bits/stdc++.h>
using namespace std;
//o(n);

string printFreq(string s){
  int freq[26]={0};
  for(int i =0; i<s.length();i++){
    freq[s[i]-'a']++;
  }

  for(int i =0;i<26;i++){
    if(freq[i]!=0){
      cout<<(char)(i+'a')<<freq[i]<<" ";
    }
  }
}


int main(){
  string s;
  getline(cin,s);
  printFreq(s);



  return 0;
}