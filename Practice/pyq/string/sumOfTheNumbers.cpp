#include<bits/stdc++.h>
using namespace std;
string sumofnumbers(string s){
  int sum=0;
  string temp = "";
  for(char ch : s){
    if(isdigit(ch)){
      temp +=ch;
    }else{
      if(!temp.empty()){
        sum +=stoi(temp);
        temp="";
      }
    }

}
if(!temp.empty()){
  sum = sum+stoi(temp);
}
cout<<sum<<endl;
return 0;

}


int  main(){
  string s;
  getline(cin,s);
  sumofnumbers(s);
  return 0;
}