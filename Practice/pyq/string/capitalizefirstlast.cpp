#include<bits/stdc++.h>
using namespace std;

string capitalize(string s){
  int n = (int)s.size();
  int start = 0;
  while(start<n){
    while(start<n && s[start]==' '){
      start++;
    }
    if(start>=n){
      break;
    }
    int end = start;
    while(end<n && s[end !=' ']){
      end++;
    }
    if(islower(s[start])){
      s[start]= toupper(s[start]);
    }
    if(end-1>start && islower(s[end-1])){
      s[end-1]=toupper(s[end-1]);
      start= end;
    }
  }
  return s;
}

int main(){
  string s;
  getline(cin,s);
  cout<<capitalize(s)<<endl;
  return 0;
}