#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
#define int long long
using namespace std;
int n,m;
int INF=1e15;
int MOD=1e9+7;
signed main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  string s;cin>>s;
  sort(s.begin(),s.end());
  vector<string> ans;
  do{
    ans.push_back(s);
  }while(next_permutation(s.begin(),s.end()));
  cout<<ans.size()<<"\n";
  for(auto it:ans){
    cout<<it<<"\n";
  }
  return 0;
}