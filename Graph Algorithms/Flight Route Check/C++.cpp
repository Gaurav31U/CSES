#include <bits/stdc++.h>
#pragma GCC optimize("unroll-loops")
#define int long long
#define EPS 0.001
using namespace std;
int n,m;
const int N=1e5+1;
const int MOD=1e9+7;
const int INF=1e12;
vector<int> adj1[N],adj2[N];
int vis1[N],vis2[N];
void dfs1(int u,int par=0){
  vis1[u]=1;
  for(auto v:adj1[u]){
    if(v!=par && vis1[v]==0)
      dfs1(v,u);
  }
}
void dfs2(int u,int par=0){
  vis2[u]=1;
  for(auto v:adj2[u]){
    if(v!=par && vis2[v]==0)
      dfs2(v,u);
  }
}
signed main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin>>n>>m;
  for(int i=0;i<m;i++){
    int a,b;cin>>a>>b;
    adj1[a].push_back(b);
    adj2[b].push_back(a);
  }
  dfs1(1);
  dfs2(1);
  for(int i=1;i<=n;i++){
    if(!vis1[i] || !vis2[i]){
      cout<<"NO\n";
      if(!vis1[i])cout<<1<<" "<<i;
      else cout<<i<<" "<<1;
      return 0;
    }
  }
  cout<<"YES\n";
  return 0;
}