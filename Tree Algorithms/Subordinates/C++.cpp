#include <bits/stdc++.h>
#pragma GCC optimize("unroll-loops")
#define int long long
#define BLK 500
using namespace std;
int n,m;
const int MOD=1e9+7;
const int N=2e5+1;
int dis=0;
int node=0;
vector<int> adj[N];
int sub[N];
int dfs(int i,int par){
  int ans=1;
  for(auto it:adj[i]){
    if(it!=par){
      ans+=dfs(it,i);
    }
  }
  sub[i]=ans-1;
  return ans;
}
signed main(){  
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin>>n;
  for(int i=2;i<=n;i++){
    int a;cin>>a;
    adj[a].push_back(i);
  }
  dfs(1,-1);
  for(int i=1;i<=n;i++)cout<<sub[i]<<" ";
  return 0;

} 