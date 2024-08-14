#include <bits/stdc++.h>
#pragma GCC optimize("unroll-loops")
#define int long long
#define EPS 0.001
using namespace std;
int n,m;
const int N=2e5+1;
const int MOD=1e9+7;
const int INF=0x3f;
vector<pair<int,int>> adj[N];
int deg[N],vis[N];
vector<int> path;
signed main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin>>n>>m;
  for(int i=0;i<m;i++){
    int a,b;cin>>a>>b;
    adj[a].push_back({b,i});
    adj[b].push_back({a,i});
    deg[b]++;
    deg[a]++;
  }
  bool exist=true;
  for(int i=1;i<=n;i++){
    if(deg[i]&1)
      exist=false;
  }
  if(!exist){
    cout<<"IMPOSSIBLE";
    return 0;
  }
  stack<int> st;
  st.push(1);
  while(!st.empty()){
    int u=st.top();
    if(deg[u]){
      while(!adj[u].empty()){
        int v=adj[u].back().first;
        int id=adj[u].back().second;
        adj[u].pop_back();
        if(!vis[id]){
          deg[u]--;
          deg[v]--;
          vis[id]=1;
          st.push(v);
          break;
        }
      }
    }else{
      path.push_back(u);
      st.pop();
    }
  }
  if(path.size()!=m+1){
    cout<<"IMPOSSIBLE";
  }else{
    for(auto it:path)cout<<it<<" ";
  }
  
  
  return 0;
}