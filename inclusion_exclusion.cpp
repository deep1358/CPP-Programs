#include<bits/stdc++.h>
using namespace std;

int main(){
  int n1,n2,n5=0,n7=0,n57=0;
  cin>>n1>>n2;
  
  for(int i=n1;i<=n2;i++)
    if(i%5==0)
      n5++;

  for(int i=n1;i<=n2;i++)
    if(i%7==0)
      n7++;

  for(int i=n1;i<=n2;i++)
    if(i%5==0&&i%7==0)
      n57++;

  int ans = n5+n7-n57;
  cout<<ans;

  return 0;
}