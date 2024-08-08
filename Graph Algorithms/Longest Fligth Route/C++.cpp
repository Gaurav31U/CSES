#include <bits/stdc++.h>
#pragma GCC optimize("unroll-loops")
#define int long long
#define EPS 0.001
using namespace std;
 
int n,m;
const int N=1e5+1;
const int MOD=1e9+7;
const int INF=1e12;
int vis[N],p[N],ind[N];
vector<int> adj[N];
void dfs(int i,int par){
  vis[i]=1;
  for(auto it:adj[i]){
    if(it!=par && !vis[it])
      dfs(it,i);
  }
}
signed main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin>>n>>m;
  for(int i=0;i<m;i++){
    int a,b;cin>>a>>b;
    adj[a].push_back(b);
    ind[b]++;
  }
  dfs(1,0);
  if(vis[n]==0){
    cout<<"IMPOSSIBLE";
    return 0;
  }
  vector<int> dis(N,-1);
  dis[1]=0;
  queue<int> q;
  for(int i=1;i<=n;i++){
    if(ind[i]==0){
      q.push(i);
    }
  }
  while(!q.empty()){
    int u=q.front();
    q.pop();
    for(auto it:adj[u]){
      if(dis[u]!=-1 && dis[it]<dis[u]+1){
        dis[it]=dis[u]+1;
        p[it]=u;
      }
      if(--ind[it]==0)q.push(it);
    }
  }
  int k=dis[n]-dis[1];
  cout<<k+1<<"\n";
  vector<int> ans(n+1,0);
  for(int i=k,u=n;i>=0;i--){
    ans[i]=u;
    u=p[u];
  }
  for(int i=0;i<=k;i++){
    cout<<ans[i]<<" ";
  }
  
  return 0;
}