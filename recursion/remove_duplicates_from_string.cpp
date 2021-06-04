#include<bits/stdc++.h>
using namespace std;

string remove_duplicates(string s){
  if(s.length()==0) return "";
  char ch=s[0];
  string ans=remove_duplicates(s.substr(1));
  cout<<ans<<endl;
  if(ch==ans[0])
    return ans;
  return (ch+ans);

}

int main(){
  string n;
  cin>>n;
  cout<<remove_duplicates(n);
  return 0;
}