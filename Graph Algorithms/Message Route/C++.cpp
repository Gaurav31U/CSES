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
  queue<int> q;
  vector<int> par(n+1,-1);
  q.push(1);
  vis[1]=1;
  while(!q.empty()){
    auto tp=q.front();
    q.pop();
    for(auto it:adj[tp]){
      if(vis[it]==0){
        vis[it]=1;
        q.push(it);
        par[it]=tp;
      }
    }
  }
  if(vis[n]==1){
    vector<int> path;
    int k=n;
    // path.push(k);
    while(par[k]!=-1){
      path.push_back(k);
      k=par[k];
    }
    path.push_back(1);
    cout<<path.size()<<"\n";
    reverse(path.begin(),path.end());
    for(auto it:path)cout<<it<<" ";
  }else{
    cout<<"IMPOSSIBLE";
  }
  return 0;
}