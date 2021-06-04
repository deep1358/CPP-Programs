#include<bits/stdc++.h>
using namespace std;

bool isSorted(int a[],int n){

  if(n==1)
    return true;

  return ( a[0]<a[1] && isSorted(a+1,n-1) );
}

int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  cout<<isSorted(a,n);
  return 0;
}