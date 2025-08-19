#include<iostream>
using namespace std;

int main(){

  int a,b;
  cout<<"Enter the value of a:"<<endl;
  cin>>a;
  cout<<"Enter the value of b:"<<endl;
  cin>>b;
  char op;
  cout<<"Enter the operation you want to perform";
  cin>>op;
  switch (op)
  {
  case '+':cout<<"The value of a+b is:"<<(a+b);
            break;
  case '-':cout<<"The value of a-b is:"<<(a-b);
            break;
  case '*':cout<<"The value of a*b is:"<<(a*b);
            break; 
  case '/':cout<<"The value of a/b is:"<<(a/b);
            break;
  case '%':cout<<"The value of a%b is:"<<(a%b);
            break;                             
  
  default:cout<<"Please enter the valid operation";
            break;
  }
  return 0;
}