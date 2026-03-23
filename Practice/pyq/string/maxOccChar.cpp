#include<bits/stdc++.h>
using namespace std;

//o(n)

char MaxOccChar(string s){
  map<char,int> freq;

  for(char ch:s){
    freq[ch]++;
  }
  int maxFreq = 0;
  char maxChar ='\0';
  for(auto it:freq){
    if(it.second>maxFreq){
      maxFreq = it.second;
      maxChar=it.first;
    }
  }
  return maxChar;
}

int main(){
  string s;
  getline(cin,s);
  cout<<"Max occuring character:"<<MaxOccChar(s);



  return 0;
}