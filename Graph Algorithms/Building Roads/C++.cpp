#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
using namespace std;
// long dp[1000001];
vector<int> adj[100001]; 
int vis[100001];
int n,m;
long md=1e9+7;
int main(){
  cin>>n>>m;
  for(int i=0,a,b;i<m;i++){
    cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  vector<int> path;
  auto dfs=[&](auto&&dfs,int i)->void{
    vis[i]=1;
    for(auto it:adj[i]){
      if(vis[it]==0)dfs(dfs,it);
    }
  };
  for(int i=1;i<=n;i++){
    if(vis[i]==0){
      path.push_back(i);
      dfs(dfs,i);
    }
  }
    cout<<path.size()-1<<"\n";
    for(int i=1;i<path.size();i++){
      cout<<path[i-1]<<" "<<path[i]<<"\n";
    }
  return 0;
}