#include<bits/stdc++.h>
using namespace std;

void tower_of_hanoi(int n, char src, char dst, char help){

  if(n==0) return;

  tower_of_hanoi(n-1,src,help,dst);
  cout<<"Move from "<<src<<" to "<<dst<<endl;
  tower_of_hanoi(n-1,help,dst,src);
}

int main(){
  int n;
  cin>>n;
  char a,b,c;
  cin>>a>>b>>c;
  tower_of_hanoi(n,a,c,b);
  return 0;
}