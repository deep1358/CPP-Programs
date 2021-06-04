#include<bits/stdc++.h>
using namespace std;

int SUM(int a){

  if(a==0)
    return 0;

  return a+SUM(a-1);
}

int main(){
  int n;
  cin>>n;
  cout<<SUM(n);
  return 0;
}