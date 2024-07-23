#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
using namespace std;
int main(){
  int n,x;cin>>n>>x;
  vector<int> ans;
  map<int,int> mp;
  for(int i=0;i<n;i++){
    int a;cin>>a;
    if(mp.count(x-a) && ans.empty()){
      ans.push_back(mp[x-a]);
      ans.push_back(i+1);
    }
    mp[a]=i+1;
  }
  if(ans.empty()){
    cout<<"IMPOSSIBLE";
    return 0;
  }
  cout<<ans[0]<<" "<<ans[1];
  return 0;
}