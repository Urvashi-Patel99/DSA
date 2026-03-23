#include<bits\stdc++.h>
using namespace std;

int main() {
  string s;
  getline(cin,s);
  int cnt_str=0;
  int cnt_hash=0;
  for(int i=0;i<s.length();i++){
    if(s[i]=='*'){
      cnt_str++;
    }else {
      cnt_hash++;
    
  }
 
}
cout<<cnt_str-cnt_hash<<endl;

  return 0;
}