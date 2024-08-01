#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
#define int long long
using namespace std;
int n,m;
int INF=1e15;
int MOD=1e9+7;
signed main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin>>n;
  vector<array<int,3>> temp;
  for(int i=0;i<n;i++){
    int a,b;cin>>a>>b;
    temp.push_back({a,b});
  }
  sort(temp.begin(),temp.end());
  int s=0;
  int ans=0;
  for(int i=0;i<n;i++){
    s+=temp[i][0];
    ans+=(temp[i][1]-s);
  }
  cout<<ans;
  return 0;
}