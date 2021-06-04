#include<bits/stdc++.h>
using namespace std;

void GCD(int a,int b){
  while(b!=0){
    int rem = a%b;
    a=b;
    b=rem;
  }
  cout<<a;
}

int main(){
  int n1,n2;
  cin>>n1>>n2;
  GCD(n1,n2);
  return 0;
}