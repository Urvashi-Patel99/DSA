#include<iostream>
using namespace std;

bool isAlphaNum(char ch){
  if((ch>='0' && ch<='9') || (ch>='a' && ch<='z')){
    return true;
  }
  return false;
}

bool ispalindrome(string ch){
  int st = 0 , end = ch.length()-1;

  while(st<end){
    if(!isAlphaNum(ch[st])){
      st++; continue;
    }
    if(!isAlphaNum(ch[end])){
      end--; continue;
    }
    if(tolower(ch[st] != tolower(ch[end]))){
      cout<<"no";
      
    }
    st++; end--;
    
    

  }
  return ;

  
}

int main(){
  string ch = "maukda&m";
  cout<<ispalindrome(ch);
  
  return 0;

}
