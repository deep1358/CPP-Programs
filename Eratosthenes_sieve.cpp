#include<bits/stdc++.h>
using namespace std;

void eratosthenes(int n){
  int a[n]={0};
  
  for(int i=2;i<n;i++)
    for(int j=i*i;j<n;j+=i)
      a[j] = 1;

  for(int i=2;i<=n;i++)
    if(a[i]==0)
      cout<<i<<" ";
}

int main(){
  int n;
  cin>>n;
  eratosthenes(n);
  return 0;
}