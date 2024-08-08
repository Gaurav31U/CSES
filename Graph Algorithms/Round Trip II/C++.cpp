#include <bits/stdc++.h>
#pragma GCC optimize("unroll-loops")
#define int long long
#define EPS 0.001
using namespace std;
 
int n,m;
const int N=1e5+1;
const int MOD=1e9+7;
const int INF=1e12;
int vis[N],p[N];
vector<int> adj[N];
int start,finish;
void dfs(int i){
  vis[i]=1;
  for(auto it:adj[i]){
    if(vis[it]==0){
      p[it]=i;
      dfs(it);
      if(start)
        return;
    }else if(vis[it]==1){
      start=it;
      finish=i;
      return;
    }
  }
  vis[i]=2;
}
signed main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin>>n>>m;
  for(int i=0;i<m;i++){
    int a,b;cin>>a>>b;
    adj[a].push_back(b);
  }
  for(int i=1;i<=n && !start;i++){
    if(vis[i]==0){
      dfs(i);
    }
  }
  if(start==0){
    cout<<"IMPOSSIBLE";
    return 0;
  }
  vector<int> cycle;
  cycle.push_back(start);
  for(int i=finish;i!=start;i=p[i]){
    cycle.push_back(i);
  }
  cycle.push_back(start);
  reverse(cycle.begin(),cycle.end());
  cout<<cycle.size()<<"\n";
  for(auto it:cycle)cout<<it<<" ";
  return 0;
}