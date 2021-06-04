#include<bits/stdc++.h>
using namespace std;

void inc(int a){
  if(a==0)
    return;
  cout<<a<<" ";
  inc(a-1);
}

void dec(int a){
  if(a==0)
    return;
  dec(a-1);
  cout<<a<<" ";
}

int main(){
  int n;
  cin>>n;
  inc(n);
  cout<<endl;
  dec(n);
  return 0;
}