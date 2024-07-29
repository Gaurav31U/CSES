#include <bits/stdc++.h>
#pragma gcc optimize("unroll-loops")
using namespace std;
// long dp[1000001];
vector<int> adj[100001]; 
int vis[100001];
int n,m;
bool possible=true;
long md=1e9+7;
void dfs(int i,int b){
  vis[i]=b;
  for(auto it:adj[i]){
    if(vis[it]==-1){
      dfs(it,b^1);
    }else if(vis[it]==vis[i]){
      possible=false;
    }
  }
}
int main(){
  cin>>n>>m;
  for(int i=0,a,b;i<m;i++){
    cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  memset(vis,-1,sizeof(vis));
  for(int i=0;i<n;i++){
    if(vis[i]==-1){
      dfs(i,0);
    }
  }
  if(possible){
    for(int i=1;i<=n;i++){
      cout<<vis[i]+1<<" ";
    }
  }else{
    cout<<"IMPOSSIBLE";
  }
  return 0;
}