#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
using namespace std;
int main(){
  int n;cin>>n;
  vector<pair<int,int>> temp;
  for(int i=0;i<n;i++){
    int a,b;cin>>a>>b;
    temp.push_back({a,1});
    temp.push_back({b,-1});
  }
  sort(temp.begin(),temp.end());
  int ans=0;
  int t=0;
  for(auto it:temp){
    t+=it.second;
    ans=max(ans,t);
  }
  cout<<ans;
  return 0;
}