#include<bits/stdc++.h>
using namespace std;

int firstocc(int a[],int n,int i,int key){

  if(i==n)
    return -1;

  if(a[i]==key)
    return i;
  
  return firstocc(a,n,i+1,key);
}
int lastocc(int a[],int n,int i,int key){

  if(i==n)
    return -1;
  
  int restArr = lastocc(a,n,i+1,key);

  if(restArr!=-1)
    return restArr;

  if(a[i]==key)
    return i;

  return -1;
  
}

int main(){
  int n,key;
  cin>>n>>key;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  cout<<firstocc(a,n,0,key)<<endl;
  cout<<lastocc(a,n,0,key)<<endl;
  return 0;
}