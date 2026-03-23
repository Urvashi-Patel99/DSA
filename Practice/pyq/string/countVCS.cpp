#include<bits/stdc++.h>
using namespace std;

int solve(string str, int length){
  int vowels = 0, consonants = 0, whitspaces =0;
  for(int i =0; i<length;i++){
    str[i]=tolower(str[i]);
  }
  for(int i =0;i<length;i++){
    if(str[i]=='a'|| str[i]=='e'||str[i]=='i'|| str[i]=='o' || str[i]=='u'){
      vowels++;
    }else if(str[i]>='a' && str[i]<='z'){
      consonants++;
    }else if(str[i]==' '){
      whitspaces++;
    }
  }

  cout<<"vowels:"<<vowels<<endl;
  cout<<"consonants:"<<consonants<<endl;
  cout<<"whitspaces:"<<whitspaces<<endl;

}



int main(){
  string s;
  getline(cin, s);
   int length =  s.length();
    solve(s,length);

  return 0;
}