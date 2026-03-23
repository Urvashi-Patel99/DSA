#include<bits/stdc++.h>
using namespace std;
//o(n)

string nonRepeating(string s){
  
  int freq[26]={0};
  int l = s.length();
  for(int i = 0; i<l;i++){
    if(s[i]==' '){
      continue;
    }else{
      freq[s[i]-'a']++;
    }
  }
  for(int i =0;i<l;i++){
    if(freq[s[i]-'a']==1 && s[i]!= ' '){
      cout<<s[i]<<" ";
    }
  }
}

int main(){
  
  string s;
  getline(cin,s);
  nonRepeating(s);
}