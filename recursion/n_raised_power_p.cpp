#include<bits/stdc++.h>
using namespace std;

int POWER(int n,int p){
  if(p==0)
    return 1;

  return n*POWER(n,p-1);
}

int main(){
  int n,p;
  cin>>n>>p;
  cout<<POWER(n,p);
  return 0;
}